#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream source("data.txt");

    if (!source) {
        cout << "Source file not found!";
        return 1;
    }

    ofstream target("data2.txt");

    char ch;

    while (source.get(ch)) {
        target.put(ch);
    }

    cout << "File copied successfully.";

    source.close();
    target.close();

    return 0;
}