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

    cout << v.front() << endl; // first value
    cout << v.back() << endl;  // last value
    cout << v.size() << endl;  // check size
    cout << v.empty() << endl; // if vector is empty then 0 or 1


    auto it = v.begin() + 2;
    v.erase(it); // erase specific element
    for (auto x : v)
    {
        cout << x << "_";
    }

    v.erase(v.begin(), v.begin() + 3); // erase till limit
    for (auto y : v)
    {
        cout << y << "_";
    }

    v.insert(v.begin() + 1, 15); // insert element by adjusting space
    for (auto z : v)
    {
        cout << z << " " << endl;
    }

    cout << "before" << " " << v.size() << endl;
    v.clear(); // clear all elements
    cout << "after" << " " << v.size() << endl;
}