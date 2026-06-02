#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of array : ";

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " th element : ";
        cin >> arr[i];
    }
    int target = 3;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Item found at index " << i << endl;
            flag = true;
        }
    }
    if (!flag)
    {

        cout << "Item not found ";
    }

    return 0;
}