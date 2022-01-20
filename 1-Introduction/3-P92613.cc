#include <iostream>
using namespace std;

int main()
{
    double num;
    cin >> num;
    int inf_num = num;
    double decimal = num - inf_num;

    if (decimal == 0.0)
    {
        cout << inf_num << " " << inf_num << " " << inf_num << endl;
    }
    else if (decimal < 0.5)
    {
        cout << inf_num << " " << inf_num + 1 << " " << inf_num << endl;
    }
    else
    {
        cout << inf_num << " " << inf_num + 1 << " " << inf_num + 1 << endl;
    }
}