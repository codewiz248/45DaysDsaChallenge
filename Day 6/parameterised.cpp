#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    Student s1("sakshi", 21);
    cout << "name of student :" << s1.name << endl;
    cout << "age of student :" << s1.age << endl;

    return 0;
}