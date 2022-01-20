#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char> > Matriu;

struct Coord {
    int x, y;
};

Coord seguentD(const Coord& p, int n);

int main() {
    
    int mida, llargada, salt;
    Coord inici;
    
    while (cin >> mida) {
        
        cin >> salt >> llargada >> inici.x >> inici.y;
        
        Matriu taula(mida, vector<char>(mida));
        
        for (int i = 0; i < mida; ++i) {
            
            for (int j = 0; j < mida; ++j) {
                
                cin >> taula[i][j];
                
            }
            
        }
        
        Coord p = inici;
        
        vector<char> frase;
        
        frase.push_back(taula[p.x][p.y]);
        
        for (int i = 1; i < llargada; ++i) {
            
            for (int j = 0; j < salt; ++j) {
                p = seguentD(p, mida);
            }
            p = seguentD(p,mida);
            
            frase.push_back(taula[p.x][p.y]);

        }
        
        for (int i = 0; i < llargada; ++i) {
            
            if (i != llargada - 1 and (frase[i] == 'X' and frase[i + 1] == 'X')) {
                
                cout << " ";
                ++i;
                
            }
            else {
                cout << frase[i];
            }
            
        }
        cout <<endl;
    }
}

Coord seguentD(const Coord& p, int n) {
    
    Coord c = p;
    
    if (c.x == 0 and c.y == n - 1) {
        c.y = c.x + 1;
        c.x = n - 1;
    }
    else if (c.x == n - 1 and c.y == n - 1) {
        c.x = 0;
        c.y = 0;
    }
    else if (c.x == 0) {
        c.x = c.y + 1;
        c.y = 0;
    }
    else if (c.y == n - 1) {
        c.y = c.x + 1;
        c.x = n - 1;
    }
    else {
        --c.x;
        ++c.y;
    }

    return c;
}
