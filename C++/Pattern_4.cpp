#include <iostream>
using namespace std;

/*
input -> 4

1
22
333
4444

*/

void pattern4(int lines)
{
    for (int i = 0; i <= lines; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int lines;
    cout << "Enter the number of lines: ";
    cin >> lines;

    pattern4(lines);
    return 0;
}
