#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Assignatura {
         string nom;                 // Nom de l’assignatura
         double nota;                // Entre 0 i 10, -1 indica NP
     };

struct Alumne {
         string nom;                 // Nom de l’alumne
         int dni;                    // DNI de l’alumne
         vector<Assignatura> ass;    // Llista d’assignatures de l’alumne
     };
     
double nota(const vector<Alumne>& alums, int dni, string nom);
double mitjana(const vector<Assignatura>& ass);
void compta(const vector<Alumne>& alums, int dni, string nom, int& com);

int main() {
    
    int n;
    
    cin >> n;
    
    vector<Alumne> alums(n);
    
    for (int i = 0; i < n; ++i) {
        
        Alumne a;
        int num_assig;
        
        cin >> a.nom >> a.dni >> num_assig;
        
        vector<Assignatura> c(num_assig);
        
        for (int j = 0; j < num_assig; ++j) {
            
            cin >> c[j].nom >> c[j].nota;
                        
        }
        a.ass = c;
        alums[i] = a;
    }
    
    int busc_dni;
    string busc_assig;
    
    while (cin >> busc_dni >> busc_assig) {
        
        int com;
        
        compta(alums, busc_dni, busc_assig, com);
        cout << com <<endl;
        
    }
    
}

double nota(const vector<Alumne>& alums, int dni, string nom) {
    
    bool alumne_trobat = false;
    int i = 0;
    
    while (not alumne_trobat and alums.size() > i) {
        
        if (dni == alums[i].dni) {
            
            alumne_trobat = true;
            
            bool assignatura_trobada = false;
            int j = 0;
            
            while (not assignatura_trobada and j < alums[i].ass.size()) {
                
                if (nom == alums[i].ass[j].nom) {
                    
                    assignatura_trobada = true;
                    
                    return alums[i].ass[j].nota;
                    
                }

                ++j;
            }
            
        }
        
        ++i;
    }
    return -1;
}

double mitjana(const vector<Assignatura>& ass) {
    
    double suma_notes = 0;
    int num_notes_totals = ass.size();
    int num_notes_pond = num_notes_totals;
    
    for (int i = 0; i < num_notes_totals; ++i) {
        
        if (ass[i].nota == -1) {
            --num_notes_pond;
        }
        else {
            
            suma_notes += ass[i].nota;
            
        }
        
    }
    
    double nota_mitjana = suma_notes/num_notes_pond;
    
    return nota_mitjana;
}
void compta(const vector<Alumne>& alums, int dni, string nom, int& com) {
    
    int comptador = 0;
    double nota_alumne = nota(alums, dni, nom);
    int num_alumnes = alums.size();
    
    for (int i = 0; i < num_alumnes; ++i) {
        
        if (nota_alumne < mitjana(alums[i].ass)) {
            
            ++comptador;
            
        }
        
    }
    com = comptador;
}
