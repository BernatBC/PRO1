#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<vector<char> > Matriu;

bool conte(const Matriu& sopa, int x, int y, string paraula, string direccio);
void actualitza(Matriu& sopa, int x, int y, string paraula, string direccio);

int main() {
    
    bool first = true;
    
    int n_paraules, n_files, n_columnes;
    while (cin >> n_paraules >> n_files >> n_columnes) {
        
        if (first) {
            first = false;
        }
        else {
            cout <<endl;
        }
        
        vector<string> seq(n_paraules);
        
        for (int i = 0; i < n_paraules; ++i) {
            
            string paraula;
            cin >> paraula;
            seq[i] = paraula;
            
        }
        
        Matriu sopa(n_files, vector<char>(n_columnes));
        //Obtenir matriu
        for (int i = 0; i < n_files; ++i) {
            for (int j = 0; j < n_columnes; ++j) {
                
                char lletra;
                cin >> lletra;
                sopa[i][j] = lletra;
                
            }
        }
        
        //Comprovar matriu
        for (int i = 0; i < n_paraules; ++i) {
            string par = seq[i];
            for (int j = 0; j < n_files; ++j) {
                
                for (int k = 0; k < n_columnes; ++k) {

                    if (sopa[j][k] == par[0] or sopa[j][k] == par[0] - 'a' + 'A') {
                        
                        bool esta_contingut;
                        
                        esta_contingut = conte(sopa, j, k, par, "horitzontal");
                        if (esta_contingut) {
                            actualitza(sopa, j, k, par, "horitzontal");
                        }
                        ;
                        esta_contingut = conte(sopa, j, k, par, "vertical");
                        if (esta_contingut) {
                            actualitza(sopa, j, k, par, "vertical");
                        }
                        
                        esta_contingut = conte(sopa, j, k, par, "diagonal");
                        if (esta_contingut) {
                            actualitza(sopa, j, k, par, "diagonal");
                        }
                    }
                    
                }
                
            }
            
        }
        
        //Mostrar matriu
        for (int i = 0; i < n_files; ++i) {
            for (int j = 0; j < n_columnes; ++j) {
                if (j != 0) cout << " ";                
                cout << sopa[i][j];
                
            }
            cout <<endl;
        }
    }
}

bool conte(const Matriu& sopa, int x, int y, string paraula, string direccio) {
    bool tot_be = true;
    int i = 0;
    int columnes = sopa[0].size();
    int files = sopa.size();
    
    if (direccio == "vertical") {
        //Comprovar vertical
        while (tot_be) {
            
            if (x + i < files and (sopa[x + i][y] == paraula[i] or sopa[x + i][y] == paraula[i] - 'a' + 'A')) {
                
                if (i == paraula.size() - 1) {
                    return true;
                }
                ++i;
            }
            else{
            tot_be = false;
            }
        }
        return false;
    }
    else if (direccio == "horitzontal") {
        //Comprovar horitzontal
        while (tot_be) {
            
            if (y + i < columnes and (sopa[x][y + i] == paraula[i] or sopa[x][y + i] == paraula[i] - 'a' + 'A')) {
                
                if (i == paraula.size() - 1) {
                    return true;
                }
                ++i;
            }
            else{
            tot_be = false;
            }
        }
        return false;
    }
    else {
        //Comprovar diagonal
        while (tot_be) {
            
            if (x + i < files and y + i < columnes and (sopa[x + i][y + i] == paraula[i] or sopa[x + i][y + i] == paraula[i] - 'a' + 'A')) {
                
                if (i == paraula.size() - 1) {
                    return true;
                }
                ++i;
            }
            else{
            tot_be = false;
            }
        }
        return false;
    }
}

void actualitza(Matriu& sopa, int x, int y, string paraula, string direccio) {
    
    int llargada = paraula.size();
    
    if (direccio == "vertical") {
        
        for (int i = 0; i < llargada; ++i) {
            
            if (sopa[x + i][y] >= 'a' and sopa[x + i][y] <= 'z') {
                
                sopa[x + i][y] = sopa[x + i][y] + 'A' - 'a';
                
            }
            
        }
        
    }
    else if (direccio == "horitzontal") {
        for (int i = 0; i < llargada; ++i) {
            
            if (sopa[x][y + i] >= 'a' and sopa[x][y + i] <= 'z') {
                
                sopa[x][y + i] = sopa[x][y + i] + 'A' - 'a';
                
            }
            
        }
    }
    else {
        for (int i = 0; i < llargada; ++i) {
            
            if (sopa[x + i][y + i] >= 'a' and sopa[x + i][y + i] <= 'z') {
                
                sopa[x + i][y + i] = sopa[x + i][y + i] + 'A' - 'a';
                
            }
            
        }
    }
    
}
