#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.pop_front();
    dq.pop_back();

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
}