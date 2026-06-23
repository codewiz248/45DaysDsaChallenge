#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1, -2, -3, -7, 2, 4, 4, 5, 6, 4, 2, 2, 1, 1, 22, 3, 3, 12, 1, 2, 21, 12};
    map<int, int> mpp;

    mpp[101] = 1; // update value

    // create hash map
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
}