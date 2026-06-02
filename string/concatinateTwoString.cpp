#include<iostream>
using namespace std;
int main(){
    string str1, str2;
    cout<<"Enter the first string : ";
    getline(cin,str1);
    cout<<"Enter the second string : ";
    getline(cin,str2);
    string ans = str1 +str2; // concatenating two string 
    cout<<"Concatenated string is : "<<ans;


    return 0;
}