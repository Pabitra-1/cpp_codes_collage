#include <iostream>
using namespace std;
struct employe{
    string name;
    int id;
    float salary;
};
int main() {
struct employe emp; 
cout<<"Enter name : ";
getline(cin,emp.name);
cout<<"Enter ID : ";
cin>>emp.id;
cout<<"Enter salary : ";
cin>>emp.salary;
cout<<"********Printing the details of employee ***** "<<endl;
cout<<"Name : "<<emp.name<<endl;
cout<<"ID : "<<emp.id<<endl;
cout<<"Salary : "<<emp.salary<<endl;

    return 0;
}