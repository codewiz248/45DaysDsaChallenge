#include<iostream>
using namespace std;


//constructor overloading
class Student
{
    public:
    string name;
    int age ;

Student()
{
    cout<<"default.....\n";
}

Student(string n,int a)
{
    name=n;
    age=a;
    cout<<"parameterised.....\n";
}

//function overloading
int sum(int x,int y)
{
    return x+y;
}

int sum(int x,int y,int z)
{
    return x+y+z;
}
};


int main()
{
Student s1;
Student s2("sakshi",21);

cout<<s1.sum(5,5)<<endl;
cout<<s1.sum(5,5,5);
    return 0;
}