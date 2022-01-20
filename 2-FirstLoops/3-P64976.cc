#include <iostream>
using namespace std;

int main(){
    
    int num1;
    cin >> num1;
    int i = 1;
    
    while(i <= num1){
        
        cout << num1 << " x " << i << " = " << num1*i <<endl;
        i++;
    }
    
    return 0;
}
