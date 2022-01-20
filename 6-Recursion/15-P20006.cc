#include <iostream>
using namespace std;

int operacio(char op);

int main() {
    
    char simbol;
    cin >> simbol;
    int resultat = operacio(simbol);
    cout << resultat <<endl;
    
}

int operacio(char op) {
    
    char a, b;
    int resultat = 0;
    int num1, num2;
    
    if (op <= '9' and op >= '0') {
        
        return op - '0';
        
    }
    
    cin >> a;
    
    if (a <= '9' and a >= '0') {
        
        num1 = a - '0';
        
    }
    else {
        
        num1 = operacio(a);
        
    }
    
    cin >> b;
    
    if (b <= '9' and b >= '0') {
        
        num2 = b - '0';
        
    }
    else {
        
        num2 = operacio(b);
        
    }
    
    if (op == '+') {
        
        resultat = num1 + num2;
        
    }
    
    if (op == '-') {
        
        resultat = num1 - num2;
        
    }
    
    if (op == '*') {
        
        resultat = num1 * num2;
        
    }
    
    return resultat;
    
}
