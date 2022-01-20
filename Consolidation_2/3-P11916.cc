#include <iostream>
using namespace std;

double taylor(double num);
double factorial(double a);

int main() {
    
    cout.setf(ios::fixed);
    cout.precision(10);
    
    int n;
    
    while (cin >> n) {
        
        cout << "Amb " << n << " terme(s) s'obte " << taylor(n) << "." <<endl;

    }
    
}

double taylor(double num) {
    
    if (num == 0 or num == 1) {
        
        return 0;
        
    }
    else {
        
        return taylor(num - 1) + 1/factorial(num);
        
    }
    
}

double factorial(double a) {
    
    if (a == 1 or a == 0) {
        
        return 1;
        
    }
    else {
        
        return a*factorial(a - 1);
        
    }
    
}
