#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

bool es_diagonal(const Matriu& taulell, int x, int y, int diagonal);

int main() {
    
    int n, m;
    
    while (cin >> n >> m) {
        
        Matriu taulell(n, vector<int>(m));
        //Omplir matriu
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> taulell[i][j];
            }
        }
        
        int posx, posy;
        cin >> posx >> posy;
        
        //Comprovar diagonals
        bool diag2;
        bool diag3;
        bool diag4 = false;
        bool diag1 = es_diagonal(taulell, posx, posy, 1);
        if (diag1) {
            diag2 = es_diagonal(taulell, posx, posy, 2);
            if (diag2) {
                diag3 = es_diagonal(taulell, posx, posy, 3);
                if (diag3) {
                    diag4 = es_diagonal(taulell, posx, posy, 4);
                }
            }
        }
        
        //Mostrar resultat
        if (diag4) {
            cout << "si" <<endl;
        }
        else {
            cout << "no" <<endl;
        }
    }
    
}

bool es_diagonal(const Matriu& taulell, int x, int y, int diagonal) {
    
    int limit_x = taulell.size();
    int limit_y = taulell[0].size();
    bool creix = true;

    if (diagonal == 1) {
        while (creix and x > 0 and y > 0) {

            if (taulell[x][y] < taulell[x - 1][y - 1]) {
                --x;
                --y;
            }
            else {
                creix = false;
            }
        }
    }
    else if (diagonal == 2) {
        while (creix and x > 0 and y < limit_y - 1) {

            if (taulell[x][y] < taulell[x - 1][y + 1]) {
                --x;
                ++y;
            }
            else {
                creix = false;
            }
        } 
    }
    else if (diagonal == 3) {
        while (creix and x < limit_x - 1 and y > 0) {

            if (taulell[x][y] < taulell[x + 1][y - 1]) {
                ++x;
                --y;
            }
            else {
                creix = false;
            }
        }
    }
    else {
        while (creix and x < limit_x - 1 and y < limit_y - 1) {

            if (taulell[x][y] < taulell[x + 1][y + 1]) {
                ++x;
                ++y;
            }
            else {
                creix = false;
            }
        }
    }
    
    return creix;
}
