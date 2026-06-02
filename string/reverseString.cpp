#include<iostream>
using namespace std;
int size(string str){
    int count = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++){
        count++;
    }
    return count ;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int j = size(str)-1;
    int i = 0;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<"Reversed string is : "<<str;

}
