#include <iostream>
using namespace std;

class Animal // parent/base/super class
{
public:
    string name;
    string color;
    int age;

    void eat()
    {
        cout << "eating" << endl;
    }

    void sleep()
    {
        cout << "sleeping" << endl;
    }

    void walk()
    {
        cout << "walking" << endl;
    }
};

class Dog : public Animal // child/derived class
{
public:
    void bark()
    {
        cout << "bhow bhow" << endl;
    }
};

int main()
{
    Dog d1;
    d1.name = "brownie";
    d1.age = 10;
    d1.eat();
    d1.sleep();
    d1.walk();
    d1.bark();

    cout << "name :" << d1.name;
    cout << "age :" << d1.age;

    return 0;
}