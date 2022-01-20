#include <iostream>
using namespace std;

void convergeix(int n, int& k, int& lluny) {
    
    cout << n << endl;
    
    //Actualitzar lluny
    if (n > lluny) {
        lluny = n;
    }
    
    if (n > 1) {
        
        if (n%2 == 0) {
            
            //Parell
            convergeix(n/2, k + 1, lluny);
            
        }
        else {
            
            //Senar
            convergeix(3*n + 1, k + 1, lluny);
            
        }
        
    }
    
}

int main() {
    
    int m, p;
    cin >> p >> m;
    
    int lluny = p;
    convergeix(p, 0, lluny);
    
    cout << "S'arriba a " << lluny << "." << endl;
    
}
