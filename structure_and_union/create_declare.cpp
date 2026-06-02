
#include <iostream>
using namespace std;
struct employe{
    string name;
    int id;
    float salary;
};
int main() {
struct employe emp = {"Pabitra Pal", 654656465,18000};
cout<<"Name : "<<emp.name<<endl;
cout<<"ID : "<<emp.id<<endl;
cout<<"Salary : "<<emp.salary<<endl;

    return 0;
}
