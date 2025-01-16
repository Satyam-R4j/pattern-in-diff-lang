#include <iostream>
using namespace std;

/*
input -> 4

*******
 *****
  ***
   *

*/

void pattern8(int lines)
{
    for (int i = 0; i < lines; i++)
    {
        // Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Stars
        for (int k = 0; k < 2 * lines - (2 * i + 1); k++)
        {
            cout << "*";
        }
        // Spaces
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int lines;
    cout << "Enter the number of lines: ";
    cin >> lines;

    pattern8(lines);
    return 0;
}
