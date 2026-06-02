#include<iostream>
using namespace std;

bool isSame(string s1 , string s2){
    if(s1.size() != s2.size()){
        return false;


    }
    for(int i = 0 ; i<s1.size() ; i++){
        if(s1[i] != s2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string str1,str2;
    cout<<"Enter the first string : ";
    getline(cin,str1);
    cout<<"Enter the second string : ";
    getline(cin,str2);
    cout<<(isSame(str1,str2) ? "Strings are same" : "Strings are different");

}