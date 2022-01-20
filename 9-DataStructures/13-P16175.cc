#include <iostream>
#include <vector>
using namespace std;

struct Parell {
    int valor;
    int pos;
};

typedef vector<Parell> Vec_Com;

Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2);

void llegeix(Vec_Com& v);
void escriu(const Vec_Com& v);

int main() {
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; ++i) {
        
        Vec_Com v;
        llegeix(v);
        Vec_Com v1 = v;
        llegeix(v);
        Vec_Com v2 = v;
        
        v = suma(v1, v2);
        escriu(v);

        
    }
    
}

void llegeix(Vec_Com& v) {
    
    int llargada;
    char punt_i_coma;
    cin >> llargada;
    
    Vec_Com entrada(llargada);
    
    for (int i = 0; i < llargada; ++i) {
        
        cin >> entrada[i].valor >> punt_i_coma >> entrada[i].pos;
        
    }
    
    v = entrada;
}

Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2) {
    
    Vec_Com resultat;
    
    bool fi_v1 = false;
    bool fi_v2 = false;
    
    int llarg_v1 = v1.size();
    int llarg_v2 = v2.size();
    
    int pos_v1 = 0;
    int pos_v2 = 0;
    
    if (llarg_v1 == 0) {
        fi_v1 = true;
    }
    
    if (llarg_v2 == 0) {
        fi_v2 = true;
    }
    
    while (not fi_v1 or not fi_v2) {
        
        //Cas que un vector ja hagia acabat o estigui buit
        if (fi_v1) {
            resultat.push_back(v2[pos_v2]);
            ++pos_v2;
        }
        else if (fi_v2) {
            resultat.push_back(v1[pos_v1]);
            ++pos_v1;
        }
        else {
            if (v1[pos_v1].pos < v2[pos_v2].pos) {
                resultat.push_back(v1[pos_v1]);
                ++pos_v1;
            }
            else if (v1[pos_v1].pos > v2[pos_v2].pos) {
                resultat.push_back(v2[pos_v2]);
                ++pos_v2;
            }
            else if (v1[pos_v1].pos == v2[pos_v2].pos) {
                Parell a;
                a.pos = v1[pos_v1].pos;
                a.valor = v1[pos_v1].valor + v2[pos_v2].valor;
                
                if (a.valor != 0) {
                    resultat.push_back(a);
                }
                
                ++pos_v1;
                ++pos_v2;
            }
        }
        //Comprovar fi vector
        if (pos_v1 == llarg_v1) {
            fi_v1 = true;
        }
        if (pos_v2 == llarg_v2) {
            fi_v2 = true;
        }
        
    }
    
    
    return resultat;
}

void escriu(const Vec_Com& v) {
    
    int llargada = v.size();
    cout << llargada;
    
    if (llargada != 0) {
    
        for (int i = 0; i < llargada; ++i) {
            
            cout << " " << v[i].valor << ";" << v[i].pos;
            
        }    
    }
    cout <<endl;
}
