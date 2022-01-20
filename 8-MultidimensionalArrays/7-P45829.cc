#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;
typedef vector<vector<bool> > Matriu_bool;

void marcar_camp(const Matriu& taulell, Matriu_bool& camps, int x, int y);

int main() {
    
    int n, m;
    while (cin >> n >> m) {
        
        //Omplir matriu
        Matriu taulell(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> taulell[i][j];
            }
        }
        
        //Comprovar caselles
        Matriu_bool camps(n, vector<bool>(m, false));
        int num_camps = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (taulell[i][j] != 0 and not camps[i][j]) {
                    marcar_camp(taulell, camps, i, j);
                    ++num_camps;
                }
            }
        }
        
        cout << num_camps <<endl;
    }
}

void marcar_camp(const Matriu& taulell, Matriu_bool& camps, int x, int y) {
    
    int limit_x = taulell.size();
    int limit_y = taulell[0].size();
    bool dins_x = true;
    bool dins_y = true;
    int mida_x = x;
    int mida_y = y;

    //Calcular mida del camp
    
    while (dins_x) {
        
        if (mida_x < limit_x and taulell[mida_x][y] != 0) {
            ++mida_x;
        }
        else {
            dins_x = false;
        }
        
    }

    while (dins_y) {
        
        if (mida_y < limit_y and taulell[x][mida_y] != 0) {
            ++mida_y;
        }
        else {
            dins_y = false;
        }
        
    }

    
    //Marcar camps
    
    for (int i = x; i < mida_x; ++i) {
        for (int j = y; j < mida_y; ++j) {
            camps[i][j] = true;
        }
    }
    
    
}
