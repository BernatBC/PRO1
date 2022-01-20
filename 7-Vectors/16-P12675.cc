#include <iostream>
#include <vector>
using namespace std;


int elements_comuns (const vector<int>& X, const vector<int>& Y);


int main ()
{
    int n, m;
    while (cin >> m >> n) {

        vector<int> X(m);
        for (int i=0; i<m; ++i) cin >> X[i];

        vector<int> Y(n);
        for (int i=0; i<n; ++i) cin >> Y[i];
        
        cout << elements_comuns(X,Y) << endl;

    }
}

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
    
    int cont = 0;
    int llarg_x = X.size();
    int llarg_y = Y.size();
    int posx = 0;
    int posy = 0;
    
    while (posx < llarg_x and posy < llarg_y) {
        
        if (X[posx] == Y[posy]) {
            
            ++cont;
            ++posx;
            ++posy;
            
        }
        else if (X[posx] < Y[posy]) {
            
            ++posx;
            
        }
        else {
            
            ++posy;
            
        }
        
    }
    
    return cont;
}
