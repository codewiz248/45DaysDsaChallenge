#include <iostream>
using namespace std;

class Car
{
private:
    void fuelCheck()
    {
        cout << "checking fuel...\n";
    }

    void batteryCheck()
    {
        cout << "checking battery...\n";
    }

public:
    void start()
    {
        fuelCheck();
        batteryCheck();
        cout << "car starting.....\n";
    }
};

int main()
{
    Car c1;
    c1.start();
}