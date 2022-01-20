#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matriu;
void transposa(Matriu& M);


int main ()
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        transposa(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}

void transposa(Matriu& M) {
    
    int n_files = M.size();
    
    for (int i = 1; i < n_files; ++i) {
        
        for (int j = 0; j < i; ++j) {
            
            int aux = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = aux;
            
        }
        
    }
    
}
