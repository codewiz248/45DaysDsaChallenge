#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number :" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; i++)
        {
            cout << "" << j;
        }
        cout << endl;
    }
    return 0;
}