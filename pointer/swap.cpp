#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;
    cout << "Before swap first number = " << *ptr1 << " second number = " << *ptr2 << endl;
    *ptr1 ^= *ptr2;
    *ptr2 ^= *ptr1;
    *ptr1 ^= *ptr2;
    cout << "After swap first number= " << *ptr1 << " second number = " << *ptr2 << endl;

    return 0;
}