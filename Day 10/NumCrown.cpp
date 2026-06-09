#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number :" << endl;
    cin >> n;

    int space = (2 * n) - 2;
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout <<" ";
        }

        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -=2;
    }
    return 0;
}