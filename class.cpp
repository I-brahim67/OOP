#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
class car
{
private:
    int registration;
    string owner;

public:
    string model;
    int year;
    int horsepower;
    void enterprivate();
    void enterpublic();
    void displayboth();
};
void car ::enterprivate()
{
    cout << "Enter registration of car:";
    cin >> registration;
    cout << "Enter Owners name:";
    getline(cin, owner);
}
void car ::enterpublic()
{
    cout << "Enter Model of the car:";
    getline(cin, model);
    cout << "Enter year of the car" << endl;
    cin >> year;
    cout << "Enter the Horse Power of the car:";
    cin >> horsepower;
}
void car ::displayboth()
{
    cout << setw(40) << right << "THE CARS INFORMATIN IS:" << endl;
    cout << "The Registration of the car is:" << registration << endl;
    cout << "The Owners name of the car is:" << owner << endl;
    cout << "The Model of the car is:" << model << endl;
    cout << "The Year oof the car is: " << year << endl;
    cout << "The Horse Power of the car is:" << horsepower << endl;
}
int main()
{
    car car1;
    car1.enterprivate();
    car1.enterpublic();
    car1.displayboth();
    return 0;
}