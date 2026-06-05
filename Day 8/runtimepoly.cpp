#include <iostream>
using namespace std;

// function overrriding

class Animal
{
public:
    string name;
    int age;

    void eat()
    {
        cout << "eating......\n";
    }

    void sound()
    {
        cout << "sounding......\n";
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "meow meow......\n";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "bhow bhow......\n";
    }
};

class Tiger : public Animal
{
public:
    void sound()
    {
        cout << "roar roar......\n";
    }
};

int main()
{
    Dog d1;
    Cat c1;
    Tiger t1;
    c1.sound();
    d1.sound();
    t1.sound();
}