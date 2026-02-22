#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
    static int count;
    int employeeid;

public:
    void setdata()
    {
        cout << "Enter id of employee: " << endl;
        cin >> employeeid;
        count++;
    }
    void getdata()
    {
        cout << "Id of Employee is " << employeeid << " and this is employee number: " << count << endl;
    }
    static void getcount()
    {
        cout << "The value of count is: " << count << endl;
    }
};
int Employee ::count;
int main()
{
    Employee ibrahim, eisa, abdullah;
    ibrahim.setdata();
    ibrahim.getdata();
    ibrahim.getcount();

    eisa.setdata();
    eisa.getdata();
    eisa.getcount();

    abdullah.setdata();
    abdullah.getdata();
    abdullah.getcount();

    return 0;
}