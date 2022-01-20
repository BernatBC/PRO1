#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector<vector<char> > Matriu;
typedef vector<vector<int> > Matriu_int;

int punts_horitz(const Matriu& lletres, const Matriu_int& punts, int fila, string paraula);
int punts_vert(const Matriu& lletres, const Matriu_int& punts, int columna, string paraula);


int main() {
    
    int f, c;
    while (cin >> f >> c) {
        
        Matriu lletres(f, vector<char>(c));

        //Omplir matriu lletres
        for (int i = 0; i < f; ++i) {
            
            for (int j = 0; j < c; ++j) {
                
                cin >> lletres[i][j];
                
            }
        }
        
        Matriu_int punts(f, vector<int>(c));

        //Omplir matriu punts
        for (int i = 0; i < f; ++i) {
            
            for (int j = 0; j < c; ++j) {
                
                cin >> punts[i][j];
                
            }
        }

        //Obtenir paraules
        int n_par;
        cin >> n_par;
        vector<string> paraules(n_par);
        for (int i = 0; i < n_par; ++i) {
            
            cin >> paraules[i];
            
        }
        
        //Comprovar caselles i calcular punts
        for (int i = 0; i < n_par; ++i) {
            string paraula = paraules[i];
            
                int max = -1;

                //Comprovar files
                for (int j = 0; j < f; ++j) {
                    int puntuacio = punts_horitz(lletres, punts, j, paraula);
                    if (max < puntuacio) {
                        max = puntuacio;
                    }
                }

                //Comprovar columnes
                for (int j = 0; j < c; ++j) {
                    int puntuacio = punts_vert(lletres, punts, j, paraula);
                    if (max < puntuacio) {
                        max = puntuacio;
                    }
                }
                //Presentar resultat
                if (max == -1) {
                    cout << "no" <<endl;
                }
                else {
                    cout << max <<endl;
                }
            
        }
        
        
    }
    
}

int punts_horitz(const Matriu& lletres, const Matriu_int& punts, int fila, string paraula) {

    int mida = lletres[0].size();
    int max_puntuacio = -1;
    //Comprovar paraules
    for (int i = 0; i < mida; ++i) {
        //Si la primera lletra coincideix, mirar que hi hagi la paraula
        if (lletres[fila][i] == paraula[0]) {

            bool tot_be = true;
            int j = 0;
            int puntuacio = 0;
            while (tot_be) {
                //Comprovar seguent lletra
                if (i + j < mida and paraula[j] == lletres[fila][i + j]) {
                    puntuacio += punts[fila][i + j];
                    //Actualitzar puntuacio
                    if (j == paraula.size() - 1) {
                        if (puntuacio > max_puntuacio) {
                            max_puntuacio = puntuacio;
                        }
                    }
                    ++j;
                }
                else {
                    puntuacio = -1;
                    tot_be = false;
                }
                
            }
            
        }
        
    }
    return max_puntuacio;
}

int punts_vert(const Matriu& lletres, const Matriu_int& punts, int columna, string paraula) {

    int mida = lletres.size();
    int max_puntuacio = -1;
    //Comprovar paraules
    for (int i = 0; i < mida; ++i) {
        //Si la primera lletra coincideix, mirar que hi hagi la paraula
        if (lletres[i][columna] == paraula[0]) {
            bool tot_be = true;
            int j = 0;
            int puntuacio = 0;
            while (tot_be) {
                //Comprovar seguent lletra
                if (i + j < mida and paraula[j] == lletres[i + j][columna]) {
                    puntuacio += punts[i + j][columna];
                    //Actualoitzar puntuacio
                    if (j == paraula.size() - 1) {
                        if (puntuacio > max_puntuacio) {
                            max_puntuacio = puntuacio;
                        }
                    }
                    ++j;
                }
                else {
                    puntuacio = -1;
                    tot_be = false;
                }
                
            }
            
        }
        
    }
    return max_puntuacio;
}
