#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number :" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int iValue = 1;
        if (i % 2 == 0)
        {
            iValue = 0;
        }
        for (int j = 1; j <= i; j++)
        {   
            iValue= 1-iValue;
            cout<<iValue;
        }

        cout << endl;
    }
    return 0;
}