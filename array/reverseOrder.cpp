#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter "<<i+1<< " th element : ";
        cin>>arr[i];
    }
    n--;
    cout<<"Array in reverse order : ";
    for(int i = n ; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}