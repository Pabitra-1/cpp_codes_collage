#include<iostream>
using namespace std;
int main() {
    string str ;
    cout<<"Enter the string : ";
    cin>>str;

   int n = str.size() - 1;
   int i = 0; 
   bool flag = true;
   while(i<n ){
    if(str[i] !=str[n]){
        flag = false;
        break;

    }
    i++;
    n--;
   }
   cout<<(flag ? "String is palindrome" : "String is not palindrome");


    

    return 0;
}