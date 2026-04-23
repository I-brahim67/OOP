#include <iostream>
#include <iomanip>
using namespace std;
class Car{
public:
string model;
int tyre;
int seats;
Car(string m){

    tyre =4;
    seats =4;
}
void display(){
    cout<<"Car model: "<<model<<endl;
    cout<<"Number of tyres: "<<tyre<<endl;
    cout<<"Number of seats: "<<seats<<endl;
}
};
class SportsCar:public Car{
public:
SportsCar(string m):Car(m){
    seats =2;
    cout<<"Sports car created with model "<<model<<endl;
}
};
int main() {
    Car myCar("Toyota");
    myCar.display();
    SportsCar mySportsCar("Ferrari");
    mySportsCar.display();
    return 0;
}