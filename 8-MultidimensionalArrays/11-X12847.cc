#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<bool> > Tauler;

void afegir_vaixell(Tauler& taulell);
int distancia(const Tauler& taulell, int x, int y);

int main() {
    
    Tauler taulell (10, vector<bool>(10, false));
    //Omplir matriu
    for (int i = 0; i < 10; ++i) {
        
        afegir_vaixell(taulell);
        
    }
    
    //Mostrar taulell
    cout << "  12345678910" <<endl;
    for (int i = 0; i < 10; ++i) {
        cout << char(i + 'a') << " ";
        for (int j = 0; j < 10; ++j) {
            if (taulell[i][j]) {
              cout << "X";  
            }
            else {
                cout << ".";
            }
        }
        cout <<endl;
    }
    cout <<endl;
    
    //Disparar
    char fila_lletra;
    int columna;
    while (cin >> fila_lletra  >> columna) {
        
        int fila = fila_lletra - 'a';
        cout << fila_lletra << columna;
        
        int dist = distancia(taulell, fila, columna - 1);
        
        if (dist != 0) {
            cout << " aigua! vaixell mes proper a distancia " << dist <<endl;
        }
        else {
            cout << " tocat!" <<endl;
        }
        
    }
    
}

void afegir_vaixell(Tauler& taulell) {
    
    char fila_lletra, direccio;
    int columna, llargada;
    
    cin >> fila_lletra >> columna >> llargada >> direccio;
    
    int fila = fila_lletra - 'a';
    
    if (direccio == 'v') {
        for (int i = 0; i < llargada; ++i) {
            taulell[fila + i][columna - 1] = true;
        }
    }
    else {
        for (int i = 0; i < llargada; ++i) {
            taulell[fila][columna - 1 + i] = true;
        }
    }
    
}

int distancia(const Tauler& taulell, int x, int y) {
   
    int dis = 10;
    
    for (int i = 0; i < 10; ++i) {
        
        for (int j = 0; j < 10; ++j) {
            
            if (taulell[i][j]) {
                
                int disx = i - x;
                int disy = j - y;
                if (disx < 0) {
                    disx = -disx;
                }
                if (disy < 0) {
                    disy = -disy;
                }
                int dis_prov;
                if (disx < disy) {
                    dis_prov = disy;
                }
                else {
                    dis_prov = disx;
                }
                
                if (dis_prov < dis) {
                    dis = dis_prov;
                }
                
            }
            
        }
        
    }
    return dis;
}
