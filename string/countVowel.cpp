#include<iostream>
using namespace std;
 bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        return true;
    }
    return false;
 }
 int main(){
    string str; 
    cout<<"Enter the string : ";
    getline(cin,str);
    int count = 0;
    for(auto ele : str){
        if(isVowel(ele)){
            count++;
        }
    }
    cout<<"Number of vowel in the string is : "<<count<<endl;
    cout<<"Number of consonant in the string is : "<<str.size()-count<<endl;
    return 0;
 }