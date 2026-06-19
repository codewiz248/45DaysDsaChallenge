#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int arr[6]={1,2,3,4,5,6};
sort(arr,arr+6,greater<int>());//something special arr+3
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
}