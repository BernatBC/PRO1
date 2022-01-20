#include <typeinfo>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct Estudiant {
         int dni;
         string nom;
         double nota;        // La nota és un valor entre 0 i 10, o -1 que representa NP
         bool repetidor;
     };

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj);


int main() {

    cout.setf(ios::fixed);
    cout.precision(4); 

    int n;
    while (cin >> n) {
        vector<Estudiant> es(n);
        for (int i=0; i<n; ++i) {
            cin >> es[i].nota >> es[i].repetidor;
        }
        double min, max, avg;
        informacio(es, min, max, avg);
        cout << min << " " << max << " " << avg << endl;
    }
}

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    
    int llargada = es.size();
    
    min = 10;
    max = 0;
    double nota_total = 0;
    int estudiants_pond = 0;
    
    for (int i = 0; i < llargada; ++i) {
        
        if (es[i].nota != -1 and not es[i].repetidor) {
        
            if (es[i].nota < min) {
                
                min = es[i].nota;
                
            }
            
            if (es[i].nota > max) {
                
                max = es[i].nota;
                
            }
            nota_total += es[i].nota;
            ++estudiants_pond;
        }
    }
    
    mitj = nota_total / estudiants_pond;
    
    if (estudiants_pond == 0) {
        min = -1;
        max = -1;
        mitj = -1;
    }
}
