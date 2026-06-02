#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream fin("data.txt",ios::app);
    
     if (!fin) {
        cout << " file not found!";
        return 1;
    }
    string s;
    cout<<"Enter text : ";
    getline(cin,s);
    fin<<endl<<s<<endl;
    cout<<"Data append successfully";
    fin.close();

    return 0;
}