#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {

        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
};

int main()
{
    vector<int> arr = {12, 45, 23, 50, 20, 8};
    BubbleSort(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}