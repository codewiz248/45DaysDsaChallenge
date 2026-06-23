#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.top();   // top element
    st.push(2); // add element
    st.push(9); // add element
    st.push(7); // add element
    st.push(8);
    st.pop(); // pop last element
    cout << st.top() << endl;

    stack<int> temp = st;
    while (!temp.empty())
    {
        cout << temp.top();
        temp.pop();
    }
    cout << endl;
    cout << "original stack :" << st.size();
}