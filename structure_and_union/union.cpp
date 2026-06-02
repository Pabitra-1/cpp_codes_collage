#include <iostream>
using namespace std;
union Data
{

    int roll;
    int age;
};
int main()
{
    union Data d;
    d.age = 21;
    d.roll = 2028;

    cout << "Roll : " << d.roll << endl;
    cout << "Age : " << d.age << endl;

    return 0;
}