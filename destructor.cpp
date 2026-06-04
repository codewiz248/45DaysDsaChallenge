#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    Student()
    {
        cout << "constructor called......" << endl;
    }

    ~Student()
    {
        cout << "destructor called........." << endl;
    }
};

int main()
{
    Student s1;
    s1.name="sakshi";
    cout<<"name :"<<s1.name<<endl;
    return 0;
}