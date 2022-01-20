#include <iostream>
using namespace std;

bool es_primer_perfecte(int n);

int main() {
    int n;
    while (cin >> n) cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
}

bool es_primer_perfecte(int n) {
    
    bool primer = true;
    
    int i = 2;
    
    if (n == 0 or n == 1) {
        
        primer = false;
        
    }
    
    while (primer and i*i <= n) {
        
        if (n%i == 0) {
            
            primer = false;
            
        }
        else {
            
            ++i;
            
        }
        
    }

    
    if (primer and n < 10) {
        
        return true;
        
    }
    
    if (primer and n > 10) {
        
        int a = 0;
        int b = n;
        
        while (b > 0) {
            
            a += b%10;
            b /= 10;
            
        }
        
        return es_primer_perfecte(a);
        
    }
    else {
        
        return false;
        
    }
    
}
