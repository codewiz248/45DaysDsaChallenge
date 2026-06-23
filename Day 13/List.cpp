#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;                                    // initialise
    l.push_back(30);                                // add element from end
    l.emplace_back(32);                             // construct & add element =>faster than push_back
    l.pop_back();                                   // pop element from end
    l.push_front(92);                               // push element in front
    cout << "first element :" << l.front() << endl; // print front element
    cout << "last elememt :" << l.back() << endl;   // print last element

    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " "; // print elements using iterator
    }

    l.remove(30); // remove all 30 values in list
    for (auto it : l)
    {
        cout << it << " ";
    }
    return 0;
}