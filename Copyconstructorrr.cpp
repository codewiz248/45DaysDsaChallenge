#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student()
    {
    }
    Student(Student &obj)
    {
        cout << "copy constructor.\n";
        this->name = obj.name;
        this->age = obj.age;
    }
};

int main()
{
    Student s1;
    s1.name = "sakshi";
    s1.age = 32;
    cout << "s1 :" << s1.name << endl;
    cout << "s1 :" << s1.age << endl;

    Student s2(s1);
    cout << "s2 :" << s2.name << endl;
    cout << "s2 :" << s2.age << endl;

    return 0;
}