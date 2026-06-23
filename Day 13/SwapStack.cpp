#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1, st2;

    st1.push(1);
    st1.push(2);
    st2.push(3);
    st2.push(4);

    cout << "stack before swap :" << st1.top() << " " << st2.top() << endl;
    st1.swap(st2);
    cout << "stack after swap :" << st1.top() << " " << st2.top() << endl;
}