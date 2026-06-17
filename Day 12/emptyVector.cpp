#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(100);
    cout<<v[0]<<" "<<v[1]<<endl;

     v.emplace_back(60); 
    cout<<v[2];

}