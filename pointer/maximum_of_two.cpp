#include<iostream>
using namespace std;
int main(){
     int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2; 

    int* ptr1=&num1;   
    int* ptr2=&num2;   
    if(*ptr1>*ptr2){
        cout<<"First number " <<*ptr1<<" is big "<<endl;
    }
    else if(*ptr1<*ptr2){
         cout<<"Second number "<<*ptr2<<" is big "<<endl;

    }
    else cout<<"Both are equal "<<endl;

    return 0;
}