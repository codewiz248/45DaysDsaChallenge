#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aaAAbbBBccCCddDDEe";
    unordered_map<char, int> hashmap;

    // traverse in string
    for (int i = 0; i < str.size(); i++)
    {
        hashmap[str[i]]++;
    }

    // traverse in hashmap
    for (auto it : hashmap)
    {
        cout << it.first << "-> " << it.second << endl;
    }
}