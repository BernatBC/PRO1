#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool mateixos_digits(int x, int y, int n);
void escriu (int n, int b);
vector<char> convertir(int n, int base);

int main() {
    
    int x, y;
    while (cin >> x >> y) {
        
        cout << "solucions per a " << x << " i " << y <<endl;
        
        bool solucions = false;
        
        for (int i = 2; i <= 16; ++i) {
            
            //Comprovar possibles solucions
            bool tenen_igual = mateixos_digits(x, y, i);
            
            //Escriure les solucions
            if (tenen_igual) {
                
                solucions = true;
                
                escriu (x, i);
                cout << " * ";
                escriu (y, i);
                cout << " = ";
                escriu (x*y, i);
                cout << " (base " << i << ")" <<endl;
                
            }
            
        }
        
        //Si no hi ha solucions, cal escriure 'cap'
        if (!solucions){
            cout << "cap" <<endl;
        }
        cout <<endl;
    }
    
}

void escriu (int n, int b) {
    
    //Escriure les solucions en ordre invers
    vector<char> seq = convertir(n, b);
    int llargada = seq.size() - 1;
    
    for (int i = llargada; i >= 0; --i) {
        
        cout << seq[i];
        
    }
    
}

bool mateixos_digits(int x, int y, int n) {
    
    vector <char> a = convertir(x, n);
    vector <char> b = convertir(y, n);
    vector <char> c = convertir(x*y, n);
    
    //Fusionar x i y
    int llarg_b = b.size();
    
    for (int i = 0; i < llarg_b; ++i) {
        
        a.push_back(b[i]);
        
    }
    
    int llarg_a = a.size();
    int llarg_c = c.size();
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    
    //Comprovar si tots els elements de de 'x' i 'y' existeixen al vector 'x*y'
    if (llarg_a == llarg_c) {
        
        for (int i = 0; i < llarg_a; ++i) {
            
            if (a[i] != c[i]) {
                return false;
            }
            
        }
        return true;
    }
    else {
        
        return false;
        
    }
    
}

vector<char> convertir(int n, int base) {
    
    //Fer el canvi de base
    vector<char> seq;
    
    if (n == 0) {
        seq.push_back('0');
    }
    
    while (n > 0) {
        
        int num = n%base;
        
        if (num < 10) {
            seq.push_back('0' + num);
        }
        else if (num == 10) {
            seq.push_back('A');
        } 
        else if (num == 11) {
            seq.push_back('B');
        }
        else if (num == 12) {
            seq.push_back('C');
        }
        else if (num == 13) {
            seq.push_back('D');
        }
        else if (num == 14){
            seq.push_back('E');
        }
        else {
            seq.push_back('F');
        }
        n = n/base;
    }
    return seq;
}
