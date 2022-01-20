#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Paraules_rep {
    
    string paraula;
    int rep;
    
};

bool ord(const Paraules_rep&a, const Paraules_rep&b);

int main() {
    
    int n_paraules, freq;
    
    while (cin >> n_paraules >> freq) {
        
        //Obtenir vector de paraules
        vector<string> llista(n_paraules);
        
        for (int i = 0; i < n_paraules; ++i) {
            
            cin >> llista[i];
            
        }
        
        //Crear vector comprimit i ordenar-lo
        vector<Paraules_rep> repeticions;
        
        sort(llista.begin(), llista.end());
        
        int contador = 1;
        
        for (int k = 0; k < n_paraules; ++k) {

            if (k == n_paraules - 1 or llista[k] != llista[k + 1]) {
                
                Paraules_rep a;
                a.paraula = llista[k];
                a.rep = contador;
                repeticions.push_back(a);
                contador = 1;
                
            }
            else {
                ++contador;
            }
            
        }
        
        /*
        for (int i = 0; i < n_paraules; ++i) {
                        
            int mida = repeticions.size();
            int j = 0;
            bool trobat = false;
            
            while (not trobat and j < mida) {
                
                if (llista[i] == repeticions[j].paraula) {
                    ++repeticions[j].rep;
                    trobat = true;
                }
                ++j;
            }
            
            if (not trobat) {
                Paraules_rep a;
                a.paraula = llista[i];
                a.rep = 1;
                repeticions.push_back(a);
            }
            
        }*/
        
        sort(repeticions.begin(), repeticions.end(), ord);
        
        //Mostrar paraules mes frquents
        for (int k = 0; k < freq; ++k) {
            
            cout << repeticions[k].paraula <<endl;
            
        }
        cout << "----------" <<endl;
    }
    
}

bool ord(const Paraules_rep&a, const Paraules_rep&b) {
    
    if (a.rep > b.rep) {
        return true;
    }
    else if (a.rep == b.rep) {
        if (a.paraula < b.paraula) {
            return true;
        }
    }
    return false;
}
