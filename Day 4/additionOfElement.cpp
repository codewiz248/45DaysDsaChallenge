#include <iostream>
using namespace std;

int main()
{
    int sum = 0; // sum of element in array
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++)
    {
        sum += arr[i];
        cout << "sum is :" << sum << endl;
    }
    return 0;
}