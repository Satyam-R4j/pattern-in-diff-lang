
#include <iostream>
using namespace std;

/*
input -> 4

1 2 3 4
1 2 3
1 2
1       

*/

void pattern6(int lines)
{
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= lines - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int lines;
    cout << "Enter the number of lines: ";
    cin >> lines;

    pattern6(lines);
    return 0;
}
