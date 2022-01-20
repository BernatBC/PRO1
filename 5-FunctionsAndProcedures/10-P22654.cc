#include <iostream>
using namespace std;


void descompon(int n, int& h, int& m, int& s);


int main() {
    int n, h, m, s;
    while (cin >> n) {
        descompon(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}

void descompon(int n, int& h, int& m, int& s){
    
    s = 0;
    m = 0;
    h = 0; 
    
    while (n >= 3600){
        
        n -= 3600;
        ++h;
        
    }
    
    while (n >= 60){
        
        n -= 60;
        ++m;
        
    }
    
    s = n;
    
}
