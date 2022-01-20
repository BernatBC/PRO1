#include <iostream>
using namespace std;

int main(){
    
    int num1, num2;
    cin >> num1 >> num2;
    
    while(num1 < num2){
        cout << num1<< ",";
        num1++;
    }
    
    if(num1 == num2){
    cout << num1 <<endl;
    }else{
        cout <<endl;
    }
    
    return 0;
}
