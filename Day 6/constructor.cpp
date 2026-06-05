#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age;

    Student(){
        cout<<"constructor called....";
    }
};

int main()
{
    Student s1;
    Student s2;
    cout<<&s1<<endl;
     cout<<&s2<<endl;
    return 0;
}