#include <iostream>
using namespace std;

int main()
{

    char letter;
    cin >> letter;

    if (letter >= 'a')
    {
        letter = letter - 'a' + 'A';
    }
    else
    {
        letter = letter - 'A' + 'a';
    }

    cout << letter << endl;

    return 0;
}