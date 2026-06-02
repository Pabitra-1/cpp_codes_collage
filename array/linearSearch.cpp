#include<iostream>
#include<vector>
using namespace std;

int main() {


    cout<<"Enter the size of array : ";
    
    int n ;
    cin>>n;
    int arr[n] ;
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter "<<i+1<< " th element : ";
        cin>>arr[i];
    }
    int target = 3;
    for(auto ele : arr){
        if(target==ele){
            cout<<"Item found ";
            return 0;
        }
        
    }
     cout<<"Item not found ";
    

 

    return 0;
}