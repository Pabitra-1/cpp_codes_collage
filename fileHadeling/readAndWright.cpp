#include <iostream>
#include<fstream>
using namespace std;
int main()
{

    ifstream fout;
    ofstream fin;
    fin.open("data.txt",ios::app);
    string s;
    cout << "Enter string : ";
    getline(cin, s);
    fin << s;
    fin.close();
    fout.open("data.txt");
    string text;
    getline(fout, text);
    cout << text;
    fout.close();
    return 0;
}