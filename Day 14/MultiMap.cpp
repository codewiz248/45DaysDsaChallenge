#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, string> mmp;
    mmp.insert({10, "sakshi"});
    mmp.insert({11, "sahil"});
    mmp.insert({12, "sakshi"});
    mmp.emplace(13, "sakshi");

    for (auto it : mmp) // 1st way to print
    {
        cout << it.first << " " << it.second;
        cout << endl;
    }

    cout<<mmp.count(10)<<endl;
    cout<<mmp.empty()<<endl;
    cout<<mmp.size()<<endl;
     mmp.rbegin();
    cout << mmp.erase(10) << endl;

    cout << mmp.size() << endl;

    mmp.clear();
}