#include <iostream>
using namespace std;

struct Fraccio {
    int num, den;
};

Fraccio suma(const Fraccio& x, const Fraccio& y);

int main() {
    
    Fraccio x, y;
    x.num = 0;
    x.den = 1;
    char barra;
    char op = '+';
    
    while (op == '+') {
        
        cin >> y.num >> barra >> y.den >> op;
        x = suma(x, y);
        
    }
    
    cout << x.num << "/" << x.den <<endl;
    
}

Fraccio suma(const Fraccio& x, const Fraccio& y) {
    
    Fraccio aux;
    aux.num = x.num*y.den + y.num*x.den;
    aux.den = x.den*y.den;
    
    if (aux.num == 0) {
        
        aux.den = 1;
        return aux;
        
    }
    
    //Euclides
    bool be = true;
    int a, b, c;
    b = aux.num;
    c = aux.den;
    
    while (be) {
        
        if (b > c) {
            
            a = b%c;
            
            if (a == 0) {
                be = false;
                a = c;
            }
            else {
                b = a;
            }

        }
        else {
            
            a = c%b;
            
            if (a == 0) {
                be = false;
                a = b;
            }
            else {
                c = a;
            }
            
        }
    }
    
    aux.num = aux.num/a;
    aux.den = aux.den/a;
    return aux;
    
}
