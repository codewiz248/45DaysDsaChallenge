#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Charecter :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
            // cnt = cnt++;
        }
        cout << endl;
    }
    return 0;
}