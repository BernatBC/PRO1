#include <iostream>
using namespace std;

int main()
{

    char input;
    cin >> input;

    if (input >= 'a')
    {
        cout << "minuscula" << endl;
    }
    else
    {
        cout << "majuscula" << endl;
    }

    if (input == 'a' or input == 'e' or input == 'i' or input == 'o' or input == 'u' or input == 'A' or input == 'E' or input == 'I' or input == 'O' or input == 'U')
    {
        cout << "vocal" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }

    return 0;
}