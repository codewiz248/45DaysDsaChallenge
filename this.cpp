#include<iostream>
using namespace std;

class Student
{
public:
string name;
int rollNo;

Student()
{
    cout<<"non parameterised constructor..."<<endl;
    cout<<"memory address from this pointer :"<<this<<endl;
}
};

int main()
{

Student s1;
cout<<"address from adress operator :"<<&s1;
}