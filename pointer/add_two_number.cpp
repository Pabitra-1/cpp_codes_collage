#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2; 

    int* ptr1=&num1;   
    int* ptr2=&num2;   

    

    cout<<"Sum of two numbers using pointer is : "<<*ptr1+*ptr2<<endl;
    delete ptr1;
    delete ptr2;

    

    return 0;
}