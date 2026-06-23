#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = {"FAAAAAAAAAAAAAaaaaaaaaaaaaahhhhhhhHHHHHHH"};
    vector<int> hash(123, 0); // 0 se 123 tk

    // hash creation
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i]]++;
    }
    // retrieve
    cout << hash['b'];

    // hash table
    for (auto it:hash)
    {
        cout << it<< " ";
    }
}
