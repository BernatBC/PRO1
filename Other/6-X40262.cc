#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

int main() {
    
    int a, b;
    cin >> a >> b;
    Matriu habitacio(a, vector<int>(b));
    
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cin >> habitacio[i][j];
        }
    }
    
    int comptador = 0;
    
    for (int i = 0; i < b; ++i) {
        
        if (i%2 == 0) {
            //Parell
            for (int j = 0; j < a; ++j) {
                if (habitacio[j][i] == 0) {
                    cout << j << " " << i <<endl;
                }
                else {
                    comptador += habitacio[j][i];
                }
            }
        }
        else {
            //Senar
            for (int j = a - 1; j >= 0; --j) {
                if (habitacio[j][i] == 0) {
                    cout << j << " " << i <<endl;
                }
                else {
                    comptador += habitacio[j][i];
                }
            }
        }

        cout << "Total en columna " << i << ": " << comptador <<endl;
    }
    
}
