#include <iostream>
#include <vector>
using namespace std;


typedef vector<int> Fila;
typedef vector<Fila> Tablero;

// Pre: tab es configuracion del tablero cuando el caballo ha hecho k-1 saltos y
//      k >= 1 indica que se ha de simular el k-esimo salto.
//
// Post: tab es la configuracion  del tablero cuando se  ha hecho el k-esimo salto
//       testigo es true si tab ha cambiado y false en caso contrario
void move_update(... tab, ... k, ... testigo) 

//
//   UNA O MAS FUNCIONES O ACCIONES 
//   SON NECESARIAS AQUI
//
//


void escribir_tablero(const Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i) {
        cout << tab[i][0];
        for (int j = 1; j < n; ++j) cout << ' ' << tab[i][j];
        cout << endl;
    }
}


//inicializa el tablero tab a cero
void set_zero(Tablero& tab) {
    int m = tab.size();
    int n = tab[0].size();
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            tab[i][j] = 0;
}


int main() {
    int m;
    while (cin >> m) {
        int n;
        cin >> n;
        Tablero tab(m, Fila(n));
        set_zero(tab);
        int i, j;
        cin >> i >> j;
        tab[i][j] = 1;
        bool testigo = true;
        int k = 1;
        while (testigo) {
            move_update(tab, k, testigo);
            ++k;
        }
        escribir_tablero(tab);
        cout << endl;
    }
}
