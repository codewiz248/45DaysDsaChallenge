#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int> &arr, int low, int mid, int high)
{

    // Part 1: sort & merge
    vector<int> temp; // Create temp array to sort so that original array doesnt change
    int left = low;   
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    //if any array exhaust then push entire array
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }


    //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// Part 2: Divide
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);        // left arrayy
    mergeSort(arr, mid + 1, high);   // right array
    mergeArray(arr, low, mid, high); // function to sort
}

int main()
{
    vector<int> v = {10, 9, 6, 8, 7, 4, 90};
    mergeSort(v, 0, v.size() - 1);

    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}