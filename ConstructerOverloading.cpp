#include <iostream>
#include <iomanip>
using namespace std;
class Car
{
    string model;
    string color;

public:
    Car(string m, string c)
    {
        model = m;
        color = c;
    }
    Car(string m)
    {
        model = m;
        color = "unknown";
    }
    Car()
    {
        model = "unknown";
        color = "unknown";
    }
    void displaydetails()
    {
        cout << "------------------------------" << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "------------------------------" << endl;
    }
};

int main()
{
    Car c1("BMW", "Black");
    c1.displaydetails();

    Car c2("Mercedes");
    c2.displaydetails();

    Car c3;
    c3.displaydetails();

    return 0;
}