#include <iostream>
using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2);

int main() {
    
    int dia1, mes1, any1;
    int dia2, mes2, any2;
    char barra;
    while (cin >> dia1 >> barra >> mes1 >> barra >> any1 >> dia2 >> barra >> mes2 >> barra >> any2) {
        
        int pos = compara(dia1, mes1, any1, dia2, mes2, any2);
        
        if (pos < 0) {
            cout << "anterior" <<endl;
        }
        else if (pos > 0) {
            cout << "posterior" <<endl;
        }
        else {
            cout << "iguals" <<endl;
        }
    }
    
}

int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    
    int posicio;
    
    if (a1 > a2) {
        
        posicio = 1;
        
    }
    else if (a1 < a2) {
        
        posicio = -1;
        
    }
    else {
        
        if (m1 > m2) {
            posicio = 1;
        }
        else if (m1 < m2) {
            posicio = -1;
        }
        else {
            if (d1 > d2) {
                posicio = 1;
            }
            else if (d1 < d2) {
                posicio = -1;
            }
            else {
                posicio = 0;
            }
        }
    }
    return posicio;
}
