#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte (const Matriu& A, const Matriu& B);


int main ()
{
    int n;
    while (cin >> n) {
        Matriu A(n, vector<int>(n));
        Matriu B(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> B[i][j];
        }   }
        Matriu C = producte(A,B);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}

Matriu producte (const Matriu& A, const Matriu& B) {
    
    int mida = A.size();
    Matriu multip(mida, vector<int>(mida));
    
    for (int i = 0; i < mida; ++i) {
        
        for (int j = 0; j < mida; ++j) {
            
            int suma = 0;
            
            for (int k = 0; k < mida; ++k) {
                
                suma = suma + A[i][k]*B[k][j];
                
            }
            
            multip[i][j] = suma;
            
        }
        
    }
    return multip;
}
