#include <iostream>
using namespace std;

int main()
{   
    int arr[5] = {1, 2, 3, 4, 5};                    
    int key = 0;
    cout << "Enter a number :" << "";
    cin >> key;
   

    for (int i = 0; i < 5; i++)
        if (arr[i ]== key)
        {
            cout << "found" << endl;
        }
       else
        {
            cout << "not found" << endl;
        }

    return 0;
}