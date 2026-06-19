#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int, greater<int>> s; // greater makes sorting in descending order
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(8);
    s.insert(81);
    s.insert(12);

    cout << s.count(2) << endl;
    cout << s.count(82) << endl;

    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << endl;

    auto it = s.find(10); // point toward address of 10 or end address
    if (it != s.end())
    {
        cout << "found";
    }
    else
    {
        cout << "not found\n";
    }

    s.erase(81);
    s.erase(s.begin());
    for (auto it : s)
    {
        cout << it << " ";
    }
}