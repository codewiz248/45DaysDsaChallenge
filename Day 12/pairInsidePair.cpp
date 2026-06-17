#include <iostream>
using namespace std;

int main()
{
    pair<pair<int, int>, pair<int, int>> p = {{10, 20}, {30, 60}};

    cout << p.first.first << endl;
    cout << p.first.second << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;

    return 0;
}