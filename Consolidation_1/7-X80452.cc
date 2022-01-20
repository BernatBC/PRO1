#include <iostream>
using namespace std;

int main(){
    
    int input;
    
    while (cin >> input){
    
        int s7 = 0;
        int s4 = 0;
        
        while (input != 0 and input%7 != 0){
            
            ++s4;
            input -=4;
            
        }
        
        while (input != 0){
            
            ++s7;
            input -=7;
            
        }
        cout << s7 << " " << s4 <<endl;
    } 
}
