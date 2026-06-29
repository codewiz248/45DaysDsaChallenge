#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    void insertionSort(vector<int> &arr)
    {
        for (int i = 1; i < arr.size(); i++)
        {
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
};

int main()
{
    vector<int> arr = {1, 2, 42, 33, 12, 54, 11, 5};
    solution s1;
    s1.insertionSort(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}