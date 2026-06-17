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

    v.insert(v.begin() + 1, 15); // insert element by adjusting space
    v.insert(v.begin() + 2, 25);
    v.insert(v.begin() + 3, 65);
    v.insert(v.begin() + 4, 55);
    for (auto z : v)
    {
        cout << z << " " ;
    }

}