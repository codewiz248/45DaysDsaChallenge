#include<iostream>
#include <string>
using namespace std;

int main()
{
    string str = "programming";

    cout<< str.append("World")<<endl;
    cout<< str.substr(0, 3)<<endl;
    cout<<str.find("gram")<<endl;
    return 0;
}