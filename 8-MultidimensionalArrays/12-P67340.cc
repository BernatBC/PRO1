#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char> > Matriu;

void amenaces(const Matriu& taulell, int posx, int posy);

int main() {
    
    //Obtenir taulell
    int a, b;
    cin >> a >> b;
    Matriu taulell(a, vector<char>(b));
    
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cin >> taulell[i][j];
        }
    }
    
    //Calcular amenaces
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            if (taulell[i][j] == 'X') {
                amenaces(taulell, i, j);
            }
        }
    }
    
}

void amenaces(const Matriu& taulell, int posx, int posy) {
    
    bool diagonal1 = true;
    bool diagonal2 = true;
    bool diagonal3 = true;
    bool diagonal4 = true;
    
    int x = posx - 1;
    int y = posy - 1;
    
    while (diagonal1) {
        
        if (x >= 0 and y >= 0) {
            
            if (taulell[x][y] == 'X') {
                cout << "(" << posx + 1 << "," << posy + 1 << ")<->(" << x + 1 << "," << y + 1 << ")" <<endl;
                diagonal1 = false;
            }
            else {
                --x;
                --y;
            }
            
        }
        else {
            diagonal1 = false;
        }
    }
    
    x = posx - 1;
    y = posy + 1;
    
    while (diagonal2) {
        
        if (x >= 0 and y < taulell[0].size()) {
            
            if (taulell[x][y] == 'X') {
                cout << "(" << posx + 1 << "," << posy + 1 << ")<->(" << x + 1 << "," << y + 1 << ")" <<endl;
                diagonal2 = false;
            }
            else {
                --x;
                ++y;
            }
            
        }
        else {
            diagonal2 = false;
        }
    }
    
    x = posx + 1;
    y = posy - 1;
    
    while (diagonal3) {
        
        if (x < taulell.size() and y >= 0) {
            
            if (taulell[x][y] == 'X') {
                cout << "(" << posx + 1 << "," << posy + 1 << ")<->(" << x + 1 << "," << y + 1 << ")" <<endl;
                diagonal3 = false;
            }
            else {
                ++x;
                --y;
            }
            
        }
        else {
            diagonal3 = false;
        }
    }
    x = posx + 1;
    y = posy + 1;
    
    while (diagonal4) {
        
        if (x < taulell.size() and y < taulell[0].size()) {
            
            if (taulell[x][y] == 'X') {
                cout << "(" << posx + 1 << "," << posy + 1 << ")<->(" << x + 1 << "," << y + 1 << ")" <<endl;
                diagonal4 = false;
            }
            else {
                ++x;
                ++y;
            }
            
        }
        else {
            diagonal4 = false;
        }
    }
}
