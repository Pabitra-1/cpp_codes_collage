#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{

    ifstream fin("data.txt");

    if (!fin)
    {
        cout << "File not found!";
        return 1;
    }

    char ch;

    int characters = 0;
    int words = 0;
    int lines = 0;

    bool inWord = false;

    while (fin.get(ch))
    {

        characters++;

        if (ch == '\n')
        {
            lines++;
        }

        if (isspace(ch))
        {
            inWord = false;
        }
        else if (!inWord)
        {
            inWord = true;
            words++;
        }
    }

    if (characters > 0)
    {
        lines++;
    }

    fin.close();

    cout << "Characters : " << characters << endl;
    cout << "Words      : " << words << endl;
    cout << "Lines      : " << lines << endl;

    return 0;
}