#include <iostream>
#include <iomanip>
using namespace std;
class Complex{
int a,b;
public:
void SetData(int V1,int V2);
void SetDataBySum(Complex o1,Complex o2);
void GetData();
};
void Complex :: SetData(int V1,int V2){
a=V1;
b=V2;
}
void Complex :: SetDataBySum(Complex o1,Complex o2){
a = o1.a + o2.a;
b = o1.b + o2.b;
}
void Complex :: GetData(){
cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
}

int main() {
    Complex c1,c2,c3;
    c1.SetData(1,2);
    c1.GetData();

    c2.SetData(3,4);
    c2.GetData();

    c3.SetDataBySum(c1,c2);
    c3.GetData();
    return 0;
}