#include <iostream>
using namespace std;
struct student
{
    int id;
    float per;
    string name;
};
int main()
{
    int i, j;
    struct student record[3];
    for (i = 0; i < 3; i++)
    {

        cout << " Enter Record : " << endl;
        cout << "Enter name: ";
        getline(cin, record[i].name);
        cout << "Enter Id: ";
        cin >> record[i].id;
        cout << "Enter percentage : ";
        cin >> record[i].per;
        cin.ignore();
    }
    for (i = 0, j = 1; i < 3; i++, j++)
    {
        cout << " Record of Student" << endl;
        cout << " Id : " << record[i].id << endl;
        cout << " Name : " << record[i].name << endl;
        cout << " Percentage : " << record[i].per << endl;
    }

    return 0;
}