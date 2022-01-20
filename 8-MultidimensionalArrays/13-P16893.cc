#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<vector<int> > Matriu;

bool comprovar(vector<int> seq); 

int main() {
    
    int vegades;
    cin >> vegades;
    
    for (int i = 0; i < vegades; ++i) {
        
        Matriu Sudoku(9, vector<int>(9));
        //Obtenir Sudoku
        for (int j = 0; j < 9; ++j) {
            for (int k = 0; k < 9; ++k) {
                cin >> Sudoku[j][k];
            }
        }
        bool correcte = true;
        //Comprovar columnes
        int j = 0;
        vector<int> columnes(9);
        while (correcte and j < 9) {
            
            for (int k = 0; k < 9; ++k) {
                
                columnes[k] = Sudoku[k][j];
                
            }
            correcte = comprovar(columnes);
            ++j;
        }
        
        //Comprovar files
        j = 0;
        vector<int> files(9);
        while (correcte and j < 9) {
            
            for (int k = 0; k < 9; ++k) {
                
                files[k] = Sudoku[j][k];
                
            }
            correcte = comprovar(files);
            ++j;
        }
        
        
        //Comprovar quadrats       
        j = 0;

        while (correcte and j < 3) {
            int s = 0;
            while (correcte and s < 3) {
                vector<int> quadradets;
                for (int k = 0; k < 3; ++k) {
                    for (int t = 0; t < 3; ++t) {
                        quadradets.push_back(Sudoku[3*j + k][3*s + t]);
                    }
                }
            correcte = comprovar(quadradets);
            ++s;
        }
        ++j;
        }
        
        //Mostrar resposat
        if (correcte) {
            cout << "si" <<endl;
        }
        else {
            cout << "no" <<endl;
        }
        
    }
    
}

bool comprovar(vector<int> seq) {
    
    sort(seq.begin(), seq.end());
   
    bool tot_be = true;
    int i = 0;
    while (tot_be and i < 9) {
        
        if (i + 1 != seq[i]) {
            tot_be = false;
        }
        ++i;
    }
    return tot_be;
}
