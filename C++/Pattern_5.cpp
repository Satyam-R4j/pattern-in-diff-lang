#include <iostream>
using namespace std;

/*
input -> 4

* * * * 
* * *
* *
*

*/

void pattern5(int lines)
{
    for (int i = 0; i <= lines; i++)
    {
        for (int j = 0; j < lines-i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int lines;
    cout << "Enter the number of lines: ";
    cin >> lines;

    pattern5(lines);
    return 0;
}
