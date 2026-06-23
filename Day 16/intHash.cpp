#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 4, 5, 3, 7, 8, 3, 2, 1, 3};
    vector<int> hash(9, 0); //(size,begineening)

    for (int i = 0; i < v.size(); i++)
    {
        hash[v[i]]++;
    }

    for (auto x : hash)
    {
        cout << x << " ";
    }
}