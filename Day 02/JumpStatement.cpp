#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;  //skip if condition satisfies
            break;     //stops when condition satisfies
        }
        cout << i << endl;
    }
    return 0;
}