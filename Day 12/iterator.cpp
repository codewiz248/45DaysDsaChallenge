#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.emplace_back(50);

    cout << "before reverse" << endl;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    cout << " "<<endl;

    cout << "after reverse" << endl;
    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout << *i << " ";
    }
}