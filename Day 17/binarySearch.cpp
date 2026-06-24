#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int target = 3;
    binarySearch(v, target);

    cout << binarySearch(v, target);
    return 0;
}