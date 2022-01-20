#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

int suma_linia (const Matriu& mat, int of, int oc, int df, int dc);

int main() {
    
    int x, y;
    cin >> x >> y;
    Matriu mat(x, vector<int>(y));
    
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cin >> mat[i][j];
        }
    }
    
    int posx, posy, posx2, posy2;
    
    cin >> posx >> posy;
    
    int suma = mat[posx][posy];
    
    while (cin >> posx2 >> posy2) {
        
        int suma_par = suma_linia(mat, posx, posy, posx2, posy2);
        posx = posx2;
        posy = posy2;
        
        suma += suma_par;
    }
    cout << "suma = " << suma <<endl;
}

int suma_linia (const Matriu& mat, int of, int oc, int df, int dc) {
    
    int suma = 0;
    
    if (of == df) {
        if (oc < dc) {
            ++oc;
            while (oc <= dc) {
                suma += mat[of][oc];
                ++oc;
            }
        }
        else {
            --oc;
            while (oc >= dc) {
                suma += mat[of][oc];
                --oc;
            }
        }
    }
    if (oc == dc) {
        if (of < df) {
            ++of;
            while (of <= df) {
                suma += mat[of][oc];
                ++of;
            }
        }
        else {
             --of;
            while (of >= df) {
                suma += mat[of][oc];
                --of;
            }
        }
    }
    return suma;
}
