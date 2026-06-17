#include <iostream>
using namespace std;

int main()
{
    int n,num;

    cout << "enter a number :" << endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cout << num * (num - 1);
    }
    cout << num;
    return 0;
}