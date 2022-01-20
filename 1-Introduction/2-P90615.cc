#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, max;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    if (max < num3)
    {
        max = num3;
    }

    cout << max << endl;
}