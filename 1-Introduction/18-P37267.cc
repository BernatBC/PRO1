#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin >> num;
    
    int num1, num2, num3;
    num1 = num - ((num/10) * 10);
    num2 = (num - ((num/100) * 100) - num1) / 10;
    num3 = (num - ((num/1000) * 1000) - num1 - num2) / 100;
    cout << num1 + num2 + num3 <<endl;
    
    return 0;
}
