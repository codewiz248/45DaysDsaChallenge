#include <iostream>
using namespace std;                                  //problem in OP

int main()

{
    int arr[5] = {1, 2, 3, 4, 5};
    int evencnt = 0, oddcnt = 0;

    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencnt++;
        }
        else
        {
            oddcnt++;
        }
      
    }
  cout << "is even" << evencnt;
        cout << "is odd" << oddcnt;
        return 0;
}