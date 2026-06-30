#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[high], arr[i]);
    return i;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int Pindex = partition(arr, low, high);
    quickSort(arr, low, Pindex - 1);  // call for left
    quickSort(arr, Pindex + 1, high); // call for right
}

int main()
{
    vector<int> v = {3, 1, 2, 4, 5};
    quickSort(v, 0, v.size() - 1);

    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}