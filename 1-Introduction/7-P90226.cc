#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name1, name2;

    cin >> name1 >> name2;

    char symbol;

    if (name1 > name2)
    {

        symbol = '>';
    }
    else if (name1 < name2)
    {
        symbol = '<';
    }
    else
    {
        symbol = '=';
    }

    cout << name1 << " " << symbol << " " << name2 << endl;

    return 0;
}