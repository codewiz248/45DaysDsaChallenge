#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.emplace_back(60);
    cout << v[0] << endl;

    cout << *v.begin() << endl;
    v.end();
    cout << v[1];

    auto it = v.begin() + 1;
    cout << *it;
}