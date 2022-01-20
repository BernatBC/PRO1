#include <vector>
#include <iostream>
using namespace std;


typedef vector< vector<int> > Matriu;

Matriu producte (const Matriu& A, const Matriu& B);


int main ()
{
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matriu A(p,vector<int>(q));
        Matriu B(q,vector<int>(r));
        for (int i=0; i<p; ++i) {
            for (int j=0; j<q; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<q; ++i) {
            for (int j=0; j<r; ++j) {
                cin >> B[i][j];
        }   }
        Matriu C = producte(A,B);
        for (int i=0; i<p; ++i) {
            for (int j=0; j<r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}

Matriu producte (const Matriu& A, const Matriu& B) {
    
    int columnesA = A.size();
    int filesA = A[0].size();
    int filesB = B[0].size();
    
    Matriu multip(columnesA, vector<int>(filesB));
    
    for (int i = 0; i < columnesA; ++i) {
        
        for (int j = 0; j < filesB; ++j) {
            int suma = 0;
            for (int k = 0; k < filesA; ++k) {
                
                suma = suma + A[i][k]*B[k][j];
                
            }
            multip[i][j] = suma;
        }
        
    }
    
    return multip;
}
