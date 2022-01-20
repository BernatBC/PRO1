#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

void min_max(const Matriu& mat, int& minim, int& maxim);

int main() {
    
    int a, b;
    int dif_max = -1;
    int n_mat = 0;
    int prim_mat = 0;
    
    while (cin >> a >> b) {
        ++n_mat;
        Matriu mat(a, vector<int>(b));
        
        //Omplir matriu
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                cin >> mat[i][j];
            }
        }

        int minim = mat[0][0];
        int maxim = mat[0][0];
        min_max(mat, minim, maxim);
        int diferencia = maxim - minim;
        
        if (diferencia > dif_max) {
            dif_max = diferencia;
            prim_mat = n_mat;
        }

    }
    
    cout << "la diferencia maxima es " << dif_max <<endl;
    cout << "la primera matriu amb aquesta diferencia es la " << prim_mat <<endl;
    
}

void min_max(const Matriu& mat, int& minim, int& maxim) {
    
    int limit_a = mat.size();
    int limit_b = mat[0].size();
    
    for (int i = 0; i < limit_a; ++i) {
        for (int j = 0; j < limit_b; ++j) {
            if (mat[i][j] < minim) {
                minim = mat[i][j];
            }
            if (mat[i][j] > maxim) {
                maxim = mat[i][j];
            }
        }
    }
    
}
