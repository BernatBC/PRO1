#include <iostream>
using namespace std;

int main(){
    
    int input;
    cin >> input;
    
    if(input == 0){
        cout << input;
    }
    
    int num = 0;
    
    while(input > 0){
        
        num = num*10;
        cout << input%10;
        input = input/10;
    
    }
    
    cout <<endl;
    
    return 0;
}
