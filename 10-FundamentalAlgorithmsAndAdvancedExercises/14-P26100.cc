#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char> > Matriu;
typedef vector<vector<int> > Matriu_int;

void actualitza(Matriu& taulell);
int bacteries_veines(Matriu& taulell, int posx, int posy);

int main() {
    
    int x, y;
    bool first = true;
    
    while (cin >> x >> y) {
        
        Matriu taulell(x, vector<char>(y));
        
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                cin >> taulell[i][j];
            }
        }
        
        if (x != 0 and y != 0) {
        
            actualitza(taulell);
            
            if (first) {
                
                first = false;
                
            }
            else {
                cout <<endl;
            }
            
            for (int i = 0; i < x; ++i) {
                for (int j = 0; j < y; ++j) {
                    cout << taulell[i][j];
                }
                cout <<endl;
            }
        }
    }
}

void actualitza(Matriu& taulell) {
    
    int midax = taulell.size();
    int miday = taulell[0].size();
    Matriu_int n_bacteries(midax, vector<int>(miday));
    
    for (int i = 0; i < midax; ++i) {
        for (int j = 0; j < miday; ++j) {
            
            n_bacteries[i][j] = bacteries_veines(taulell, i, j);
            
        }
    }
    
    for (int i = 0; i < midax; ++i) {
        for (int j = 0; j < miday; ++j) {
            
            if ((taulell[i][j] == 'B' and n_bacteries[i][j] == 2) or (taulell[i][j] == 'B' and n_bacteries[i][j] == 3) or (taulell[i][j] == '.' and n_bacteries[i][j] == 3)) {
                
                taulell[i][j] = 'B';
                
            }
            else {
                taulell[i][j] = '.';
            }
            
        }
    }
    
}

int bacteries_veines(Matriu& taulell, int posx, int posy) {
    
    int bacteries = 0;
    
    if (posx != 0) {
        
        if (taulell[posx - 1][posy] == 'B') {
            
            ++bacteries;
            
        }
        
        if (posy != 0) {
            
            if (taulell[posx - 1][posy - 1] == 'B') {
            
            ++bacteries;
            
            }
            
        }
        
        if (posy != taulell[0].size() - 1) {
            
            if (taulell[posx - 1][posy + 1] == 'B') {
            
            ++bacteries;
            
            }
            
        }
        
    }
    
    if (posx != taulell.size() - 1) {
        
        if (taulell[posx + 1][posy] == 'B') {
            
            ++bacteries;
            
        }
        
        if (posy != 0) {
            
            if (taulell[posx + 1][posy - 1] == 'B') {
            
            ++bacteries;
            
            }
            
        }
        
        if (posy != taulell[0].size() - 1) {
            
            if (taulell[posx + 1][posy + 1] == 'B') {
            
            ++bacteries;
            
            }
            
        }
        
    }
    
    if (posy != 0) {
        
        if (taulell[posx][posy - 1] == 'B') {
            
            ++bacteries;
            
        }
        
    }
    
    if (posy != taulell[0].size() - 1) {
        
        if (taulell[posx][posy + 1] == 'B') {
            
            ++bacteries;
            
        }
        
    }
        return bacteries;
}
