#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef vector<vector<char> > Matriu;
void actualitzar(Matriu& creu, int n, int posx, int posy);

int main() {
    
    int n;
    cin >> n;
    int midax = pow(3, n) + 2;
    int miday = midax - 2;
    Matriu creu(miday, vector<char>(midax, ' '));
    
    //Afegir barres laterals
    for (int i = 0; i < miday; ++i) {
        
        creu[i][0] = '|';
        creu[i][midax - 1] = '|';
        
    }
    
    //Dibuixar creu
    actualitzar(creu, n, midax/2, miday/2);
    
    //Mostrar creu
    for (int i = 0; i < miday; ++i) {
        for (int j = 0; j < midax; ++j) {
            cout << creu[i][j];
        }
        cout <<endl;
    }
}

void actualitzar(Matriu& creu, int n, int posx, int posy) {
    
    creu[posy - 1][posx] = '|';
    creu[posy + 1][posx] = '|';
    creu[posy][posx - 1] = '-';
    creu[posy][posx + 1] = '-';
    creu[posy][posx] = 'O';
    
    if (n > 1) {
        
        actualitzar(creu, n - 1, posx, posy);
        actualitzar(creu, n - 1, posx + pow(3, n - 1), posy);
        actualitzar(creu, n - 1, posx, posy + pow(3, n - 1));
        actualitzar(creu, n - 1, posx - pow(3, n - 1), posy);
        actualitzar(creu, n - 1, posx, posy - pow(3, n - 1));

    }
    
}
