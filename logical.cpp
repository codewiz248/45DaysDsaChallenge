#include <iostream>
using namespace std;

int main()
{
    int con1 = (10 > 20) ;  //false
    int con2 = (30 > 20);   //true
    cout << (con1 && con2) << endl;    //AND
    cout << (con1 || con2) << endl;    //OR
    cout << (!con1) << endl;           //NOT


    return 0;
}