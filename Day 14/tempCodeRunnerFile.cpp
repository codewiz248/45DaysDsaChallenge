#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> uset;
    uset.insert(2);
    uset.insert(2);
    uset.insert(2);
    uset.insert(4);
    uset.insert(6);
    uset.insert(8);
    uset.insert(81);
    uset.insert(12);

    cout << endl;
    for (auto it : uset)
    {
        cout << it << " ";
    }

    cout << endl;

    auto it = uset.find(10);
    if (it != uset.end())
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}