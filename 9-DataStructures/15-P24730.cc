#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Professor {
    string nom;
    int n_carmels;
    int n_pastanagues;
};

void tractar_dades(vector<Professor>& dades);
bool ordenar(const Professor &a, const Professor &b);

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        
        int llargada;
        cin >> llargada;
        vector<Professor> dades(llargada);
        
        for (int j = 0; j < llargada; ++j) {
            
            cin >> dades[j].nom >> dades[j].n_carmels >> dades[j].n_pastanagues;
            
        }
        
        tractar_dades(dades);
        cout <<endl;
    }
}

void tractar_dades(vector<Professor>& dades) {
    
    sort(dades.begin(), dades.end(), ordenar);
    int num = dades.size();
    
    for (int i = 0; i < num; ++i) {
        
        cout << dades[i].nom <<endl;
        
    }

}

bool ordenar(const Professor &a, const Professor &b) {
    
    if (a.n_carmels > b.n_carmels) {
        
        return true;
        
    }
    else if (a.n_carmels == b.n_carmels) {
        
        if (a.n_pastanagues > b.n_pastanagues) {
            return true;
        }
        else if (a.n_pastanagues == b.n_pastanagues) {
            
            if (a.nom.size() < b.nom.size()) {
                
                return true;
            }
            else if (a.nom.size() == b.nom.size()) {
                
                if (a.nom < b.nom) {
                    return true;
                }
            }
        }
    }
    return false;
}
