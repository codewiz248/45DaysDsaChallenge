#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,8,9};
    int max = 0;

    for (int i = 0; i < 5; i++)
        if (arr[i] > max)
       
        { max=arr[i];
          
        }
      cout <<"largest element is:" <<""<<max;
}