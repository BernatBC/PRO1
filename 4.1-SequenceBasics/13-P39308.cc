#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int num;
    
    while (cin >> num){
    
        cout << "divisors de " << num << ":";
    
        int divisor = 1;
    
        while (divisor*divisor < num){
            
            if(num%divisor == 0){
                cout << " " << divisor;
            }
            
            ++divisor;
        }
        
        divisor = sqrt(num);
        
        while (divisor*divisor > 0){
            
            if(num%divisor == 0){
                cout << " " << num/divisor;
            }
            
            --divisor;
            
        }
        
        cout <<endl;
    }
}
