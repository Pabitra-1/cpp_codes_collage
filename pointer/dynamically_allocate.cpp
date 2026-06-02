#include <iostream>
using namespace std;

int main() {

    int* ptr = new int;   // dynamically allocate memory

    *ptr = 10;

    cout << *ptr << endl;

    delete ptr;           // free memory

    return 0;
}