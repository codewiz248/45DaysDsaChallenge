#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,string> umap;
    umap.insert({2,"sakshi"});
    umap.insert({1,"sahil"});
    umap.insert({2,"dadu"});
    umap.insert({3,"pranay"});
    umap.insert({4,"OP"});
    

 cout << umap[4];
 cout<<endl;
    for (auto it=umap.begin(); it!=umap.end();it++)
    {
        cout <<it->first << " "<<it->second;
    cout << endl;
}

    umap.begin();

}