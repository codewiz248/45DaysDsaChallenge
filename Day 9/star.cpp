#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number :" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "";
        }
        // star
         for (int j = 1; j <= (2 * i) - 1; j++)
            {
            cout << "*";
            }
        //space
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "-";
        }
        cout << endl;
    }
    return 0;
}