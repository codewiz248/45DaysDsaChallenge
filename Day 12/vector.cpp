#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int>v={10,20,30};
    // cout<<v[0]<<" "<<v[1]<<v[2];

    vector<int> v(5, 100);     //ways of initialisation
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[0]<<" ";
    }
}