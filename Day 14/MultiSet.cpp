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

    cout << "descending order using great :" << endl;
    for (auto it : ms1)
    {
        cout << it << " ";
    }

    multiset<int> ms2;
    ms2.insert(2);
    ms2.insert(2);
    ms2.insert(2);
    ms2.insert(4);
    ms2.insert(6);
    ms2.insert(8);
    ms2.insert(81);
    ms2.insert(12);

    cout << endl;
    cout << "ascending order : " << endl;
    for (auto it : ms2)
    {
        cout << it << " ";
    }
}
