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

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}