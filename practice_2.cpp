#include <iostream>
using namespace std;
class Shop
{
private:
    int itemnumber[100];
    int itemprice[100];
    int start;

public:
    void setstart() { start = 0; }
    void setitemnumber();
    void displayitems();
};
void Shop ::setitemnumber()
{
    cout << "Enter the Item Number:" << endl;
    cin >> itemnumber[start];
    cout << "Enter Item Price";
    cin >> itemprice[start];
    start++;
}
void Shop ::displayitems()
{
    for (int i = 0; i < start; i++)
    {
        cout << "Item no \t" << itemnumber[i] << " is worth \t" << itemprice[i] << endl;
    }
}
int main()
{
    Shop shop1;
    shop1.setstart();
    for (int j = 0; j <= 3; j++)
    {
        shop1.setitemnumber();
    }
    shop1.displayitems();
    return 0;
}
