#include<iostream>
using namespace std;

class Student
{
private:
string name;
int rollNo;

public:
Student(string name, int rollNo)
{
    cout<<"parameterised constructor...."<<endl;
    this->name=name;
    this->rollNo=rollNo;

    cout<<"Name inside constructor :"<<name<<endl;
    cout<<"Roll no inside constructor :"<<rollNo<<endl;
}


void show()
{
    cout<<"name outside constructor :"<<name <<endl;
    cout<<"name inside constructor :"<<rollNo;
}
};

int main()
{

Student s1("sakshi",21);
s1.show();
return 0;
}