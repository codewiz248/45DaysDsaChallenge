#include <iostream>
using namespace std;

void upperPart(int n)
{
    // Upper Traingle
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "*";
        }

        cout << endl;
        space +=2;
    }
}

void lowerPart(int n)
{
    // LOWER TRIANLE
    int space= (2*n)-2;
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space-=2;
    }
}

int main()
{
    int n;
    cout << "Enter Number :";
    cin >> n;

    upperPart(n);
    lowerPart(n);
}
