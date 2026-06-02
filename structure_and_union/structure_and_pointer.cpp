#include <iostream>
using namespace std;
struct iteam
{
    string name;
    int qty;
    float price;
    float amount;
};
int main()
{

    struct iteam *it = new iteam;

    cout << " Enter Product name : ";
    getline(cin, it->name);
    cout << " Enter Price : ";
    cin >> it->price;
    cout << " Enter quantity : ";
    cin >> it->qty;
    cout << " Name : " << it->name << endl;
    cout << " price : " << it->price << endl;
    cout << " Quantity : " << it->qty << endl;
    cout << " Total amount : " << (float)(it->qty * it->price) << endl;

    return 0;
}