#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    sort(v.begin(), v.end(), greater<int>());
    for (auto it : v)
    {
        cout << it << " ";
    }
}