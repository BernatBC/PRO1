#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool comprova(string& entrada);

int main() {
    
    
    string entrada;
    
    while (cin >> entrada) {
        
        bool tanquen = comprova(entrada);
        
        if (not tanquen) {
            
            cout << "no" <<endl;
            
        }
        else {
            
            cout << "si" <<endl;
            
        }
    }
}

bool comprova(string& entrada) {
    
    int llargada = entrada.size();
    vector<char> sequencia;
    
    for (int i = 0; i < llargada; ++i) {
        
        char caracter = entrada[i];
        
        if (caracter == '(' or caracter == '[') {
            sequencia.push_back(caracter);
        }
        else {
            
            if (sequencia.size() == 0) {
                return false;
            }
            else if (sequencia[sequencia.size() - 1] == (caracter == ')' ? '(' : '[')) {
                sequencia.pop_back();
            }
            else{
                return false;
            }
            
        }
        
    }
    
    if (sequencia.size() == 0) {
        return true;
    }
    else {
        return false;
    }
}
