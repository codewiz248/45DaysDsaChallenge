#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student(string n, int r)
    {
        cout << "Parameterized constructor...\n";
        name = n;
        rollNo = r;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1("sakshi", 263);
    Student s2("duggu", 83);
    Student s3("pranay", 33);
    Student s4("sahil", 34);
    return 0;
}