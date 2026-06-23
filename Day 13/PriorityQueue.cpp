#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(2);
    pq.push(4);
    pq.push(6);
    pq.push(8);
    
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    cout << pq.empty() << endl;
    cout << endl;
    
     priority_queue<int> temp = pq;
     while (!temp.empty())
     {
         cout << temp.top() << " ";        //use top instead of front
         temp.pop();
     }
}