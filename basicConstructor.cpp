#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;

    Student(string n, int r){
    cout<<"Default constructor...."<<endl;
    name =n;
    rollNo =r; 
    cout<<"name :"<<name<<endl;
    cout<<"rollNo :"<<rollNo;   
}
};

int main()
{
Student s1("sakshi",21);
return 0;
}