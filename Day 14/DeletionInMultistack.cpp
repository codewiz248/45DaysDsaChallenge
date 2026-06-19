#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int, greater<int>> ms1; // greater makes sorting in descending order
    ms1.insert(2);
    ms1.insert(2);
    ms1.insert(2);
    ms1.insert(4);
    ms1.insert(6);
    ms1.insert(8);
    ms1.insert(81);
    ms1.insert(12);

    cout << "2: " << ms1.count(2);
    cout << " " << endl;
    for (auto it : ms1)
    {
        cout << it << " ";
    }

    auto it = ms1.find(2);
    ms1.erase(it);

    cout << endl;
    cout << ms1.count(2);
}