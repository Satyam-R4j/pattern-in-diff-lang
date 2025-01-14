#include <iostream>

using namespace std;

/*
input -> 4

* 
* *
* * *
* * * *

*/

void pattern_2(int lines)
{
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 0; i > j; j++)
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
    pattern_2(lines);
    return 0;
}
