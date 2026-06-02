#include<iostream>
using namespace std;
int main(){
    string str1, str2;
    cout<<"Enter the first string : ";
    getline(cin,str1);
    str2 = str1; // copying one string to another in cpp we had build in string library
    cout<<"Copied string is : "<<str2;


    return 0;
}