#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
class Point{
int x,y;
public:
friend void Distance(Point o1,Point o2);
Point(int a,int b){
x=a;
y=b;
}
void display(){
cout<<"the point is ( "<<x<<" , "<<y<<" ) "<<endl;
}
};
void Distance(Point o1,Point o2){
float dist;
dist = sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
cout<<"Distance is: "<<dist<<endl;
}
int main() {
    Point o1(2,3);
    o1.display();
    Point o2(3,5);
    o2.display();
    Distance(o1,o2);
    return 0;
}