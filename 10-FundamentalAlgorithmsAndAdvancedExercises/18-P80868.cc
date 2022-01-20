#include <iostream>
using namespace std;

int nombre_digits(int n) {
    
    if (n < 10) {
        return 1;
    }
    else {
        return nombre_digits(n/10) + 1;
    }
}

int main() {
    
    int num;
    int rep;
    
    cin >> num >> rep;
    
    int num_digits = nombre_digits(num);
    
    for (int i = 1; i <= rep; ++i) {
        
        for (int j = 1; j <= i; ++j) {
            
            if (j != 1) {
                cout << "-";
            }
            cout << num;
        }
        
        for (int j = 0; j < 2*(1 + num_digits)*(rep - i) + 1; ++j) {
            
            cout << ".";
            
        }
        
        for (int j = 1; j <= i; ++j) {
            if (j != 1) {
                cout << "-";
            }
            cout << num;
        }
        
        cout <<endl;
    }
    
}
