#include<iostream>
using namespace std;
int main(){
    string str ;
    cout<<"Enter the string : ";
    cin>>str;
    int count = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++){
        count++;
    }
    cout<<"Length of string is : "<<count;
}