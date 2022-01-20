#include <iostream>
#include <string>
using namespace std;

struct Racional{
    double numerador, denominador;
};

Racional opera(string operacio, Racional num1, Racional num2);
Racional simplifica(Racional resultat);

int main() {
    
    Racional num1, num2, resultat;
    string operacio;
    
    cin >> num1.numerador >> num1.denominador;
    resultat = simplifica(num1);
    
    if (resultat.denominador == 1) {
            cout << resultat.numerador <<endl;
        }
        else {
            cout << resultat.numerador << "/" << resultat.denominador <<endl;
        }
    
    while (cin >> operacio >> num2.numerador >> num2.denominador) {
        
        resultat = opera(operacio, num1, num2);
        
        if (resultat.denominador == 1) {
            cout << resultat.numerador <<endl;
        }
        else {
            cout << resultat.numerador << "/" << resultat.denominador <<endl;
        }
        num1 = resultat;
    }
    
}

Racional opera(string operacio, Racional num1, Racional num2) {
    
    Racional resultat;
    
    if (operacio == "suma") {
        //Suma
        resultat.numerador = (num1.numerador*num2.denominador) + (num1.denominador*num2.numerador);
        resultat.denominador = num1.denominador*num2.denominador;
    }
    else if (operacio == "resta") {
        //Resta
        resultat.numerador = (num1.numerador*num2.denominador) - (num1.denominador*num2.numerador);
        resultat.denominador = num1.denominador*num2.denominador;
    }
    else if (operacio == "multiplica") {
        //Multiplicacio
        resultat.numerador = num1.numerador*num2.numerador;
        resultat.denominador = num1.denominador*num2.denominador;
    }
    else {
        //Divisio
        resultat.numerador = num1.numerador*num2.denominador;
        resultat.denominador = num1.denominador*num2.numerador;
    }
    resultat = simplifica(resultat);
    return resultat;
}

Racional simplifica(Racional resultat) {

    if (resultat.numerador == 0) {
        resultat.denominador = 1;
        return resultat;
    }
    //MCD euclides
    int b = resultat.numerador;
    int c = resultat.denominador;
    bool be = true;
    int mcd = 1;
    if (b < 0) b = -b;
    if(c < 0) c = -c;
    
    while (be) {
        
        if (b > c) {
            
            int aux = b%c;
            
            if (aux == 0) {
                be = false;
                mcd = c;
            }
            else {
                b = aux;
            }

        }
        else {
            
            int aux = c%b;
            
            if (aux == 0) {
                be = false;
                mcd = b;
            }
            else {
                c = aux;
            }
            
        }
    }
    resultat.numerador = resultat.numerador/mcd;
    resultat.denominador = resultat.denominador/mcd;   
    
    if (resultat.denominador < 0 and resultat.numerador > 0) {
        
        resultat.numerador = -resultat.numerador;
        resultat.denominador = -resultat.denominador; 
        
    }
    return resultat;
}
