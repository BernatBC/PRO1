#include <iostream>
using namespace std;

void base(int num, int b);

int main() {
    
    int n;
    while (cin >> n) {
    
    cout << n << " = ";
    
    base(n, 2);
    
    cout << ", ";
    
    base(n, 8);
    
    cout << ", ";
    
    base(n, 16);
    
    cout <<endl;
    
    }
}

void base(int num, int b){
    
    if (num < b) {
        
        if (num >= 10) {
            
            cout << char('A' - 10 + num);
            
        }
        else {
            
            cout << num;
        
        }
    }
    else {

        base(num/b, b);
        
        if (num%b >= 10) {
            
            cout << char('A' - 10 + num%b);
            
        }
        else  {
            
            cout << num%b;
            
        }
        
    }
    
}
