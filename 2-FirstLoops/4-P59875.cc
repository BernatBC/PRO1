#include <iostream>
using namespace std;

int main(){
    
    int num1, num2;
    cin >> num1 >> num2;
    
    if(num1 > num2){
        
        while (num1 >= num2){
            cout << num1 <<endl;
            num1--;
        }
        
    }else{
        
        while (num2 >= num1){
            cout << num2 <<endl;
            num2--;
        }
        
    }
    
    return 0;
}
