#include <iostream>
using namespace std;

class Student
{
public:
    string name = "saksshi";
    int age = 12;

    void show()
    {
        cout << "name :" << name << endl;
        cout << "age  :" << age << endl;
    }
};

int main()
{
    Student s1;
    Student s2(s1);
    s2.show();
    return 0;
}