#include <vector>
#include <iostream>
using namespace std;


bool quadrat_magic (const vector< vector<int> >& M);
bool comprova_rep (const vector< vector<int> >& M);


int main () 
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        cout << quadrat_magic(M) << endl;
}   }

bool quadrat_magic (const vector< vector<int> >& M) {
    
    int mida = M.size();
    int suma_glob = 0;
    bool first = true;
    
    //Files
    
    for (int i = 0; i < mida; ++i) {
        
        int suma_f = 0;
        
        for (int j = 0; j < mida; ++j) {
            
            suma_f += M[i][j];
            
        }
        
        if (first) {
            suma_glob = suma_f;
            first = false;
        }
        else if (suma_f != suma_glob) {
            return false;
        }
        
    }
    
    //Columnes
    
    for (int i = 0; i < mida; ++i) {
        
        int suma_c = 0;
        
        for (int j = 0; j < mida; ++j) {
            
            suma_c += M[j][i];
            
        }
        if (suma_c != suma_glob) {
            return false;
        }
    }
    
    //Diagonals
    int suma_d1 = 0;
    for (int i = 0; i < mida; ++i) {
        
        suma_d1 += M[i][i];
        
    }
    if (suma_d1 != suma_glob) {
        return false;
    }
    
    int suma_d2 = 0;
    int j = mida - 1;
    for (int i = 0; i < mida; ++i) {
        
        suma_d2 += M[i][j];
        --j;
        
    }
    if (suma_d2 != suma_glob) {
            return false;
    }
    
    //Repeticions
    bool repetit = comprova_rep(M);
    
    if (repetit) {
        return false;
    }
    
    return true;
    
}

bool comprova_rep (const vector< vector<int> >& M) {
    
    int mida = M.size();
    
   for (int r = 1; r <= mida*mida; ++r) {
		bool trobat = false;
		for (int s = 0; s < mida and not trobat; ++s) {
			for (int t = 0; t < mida and not trobat; ++t) {
				if (not trobat and M[s][t] == r) trobat = true;
			}
		}
		if (not trobat) return true;
	}

	
    
    return false;
}
