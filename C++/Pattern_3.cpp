#include <iostream>
using namespace std;

/*
input -> 4

1
12
123
1234

*/

void pattern_3(int lines)
{
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int lines;
    cout << "Enter the number of lines: ";
    cin >> lines;

    pattern_3(lines);

    return 0;
}
