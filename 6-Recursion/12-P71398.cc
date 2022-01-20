#include <iostream>
using namespace std;


void digit_maxim_i_minim(int n, int& maxim, int& minim);


int main() {
    int x;
    while (cin >> x) {
      int a, b;
      digit_maxim_i_minim(x, a, b);
      cout << x << ' ' << a << ' ' << b << endl;
    }
}

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    
    maxim = 0;
    minim = 9;
    
    if (n >= 10) {
    
        digit_maxim_i_minim(n/10, maxim, minim);
    }
        
        n %= 10;
        
        if (n > maxim) {
            
            maxim = n;
            
        }
        
        if (n < minim) {
            
            minim = n;
            
        }
}
