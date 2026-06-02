#include <iostream>
using namespace std;
struct student
{
    string name;
    int id;
    struct dob
    {
        int dd;
        int mm;
        int yy;
    } DOB;
};
int main()
{
    struct student s;

    cout << "Enter Name : ";
    getline(cin, s.name);
    cout << "Enter roll no.  : ";
    cin >> s.id;
    cout << "Enter date of birth[mm:dd:yyyy]format: ";
    cin >> s.DOB.mm >> s.DOB.dd >> s.DOB.yy;
    cout << "Name of student : " << s.name << endl;
    cout << "Roll no. : " << s.id << endl;
    cout << "Date of birth : " << s.DOB.mm << "/" << s.DOB.dd << "/" << s.DOB.yy << endl;

    return 0;
}