#include<iostream>
using namespace std;

class Student 
{
public:
string name;
int rollNo;

};


int main()
{
    Student s1;
    s1.name=" Sakshi";
    cout<<"Before copy :"<<s1.name<<endl;
    
    Student s2(s1);
    cout<<"After copy :"<<s2.name;
    
    return 0;

}