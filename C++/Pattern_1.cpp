#include <iostream>

using namespace std;

/* 
input = 4;
****
****
****
****
*/


void pattern_one(int lines)
{
  for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < lines; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int lines = 0;
    cout << "Enter the number: ";
    cin >> lines;

    pattern_one(lines);
  

    return 0;
}
