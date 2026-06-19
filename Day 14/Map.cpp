#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> mp = {{1, "dadu"}}; // 1st way to add value to map
    mp.insert({2, "sakshi"});            // 2nd way to add value to map
    mp.emplace(3, "somnath");            // 3rd way to add value to map
    mp[4] = "susmita";                   // 4th way to add value to map
    mp[1] = "pranay";                    // update value
    cout << mp[1] << endl;               // second way to print

    cout<<"before deletion :";
    for (auto it : mp) // 1st way to print
    {
        cout << it.first << " " << it.second;
        cout << endl;
    }

    cout<<"after deletion :";
    cout<<endl;
    mp.erase(2);  //erase a specific value
    for(auto it :mp)
    {
    cout << it.first << " " << it.second<<endl;
    }
}