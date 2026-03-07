#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;
class Complex{
int a,b;
public:
void SetData(int V1,int V2);
void SetDataBySum(Complex o1,Complex o2);
void SetDataByProduct(Complex o1,Complex o2);
void SetDataByDifference(Complex o1,Complex o2);
void GetData(ofstream &fout);
};
void Complex :: SetData(int V1,int V2){
a=V1;
b=V2;
}
void Complex :: SetDataBySum(Complex o1,Complex o2){
a = o1.a + o2.a;
b = o1.b + o2.b;
}
void Complex :: SetDataByProduct(Complex o1,Complex o2){
a = o1.a * o2.a - o1.b * o2.b;
b = o1.a * o2.b + o1.b * o2.a;
}
void Complex :: SetDataByDifference(Complex o1,Complex o2){
a = o1.a - o2.a;
b = o1.b - o2.b;
}
void Complex :: GetData(ofstream &fout){
fout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
}

int main() {
    ifstream fin("input.txt");
    if (!fin) {
        cout << "Error opening file!" << endl;
    }
    ofstream fout("output.txt");
    int a,b;
    fin>>a>>b;
    Complex c1,c2,c3;
    c1.SetData(a,b);
    c1.GetData(fout);
    fin>>a>>b;
    c2.SetData(a,b);
    c2.GetData(fout);

    c3.SetDataBySum(c1,c2);
    c3.GetData(fout);
    c3.SetDataByProduct(c1,c2);
    c3.GetData(fout);

    c3.SetDataByDifference(c1,c2);
    c3.GetData(fout);
    fin.close();
    fout.close();
    return 0;
}