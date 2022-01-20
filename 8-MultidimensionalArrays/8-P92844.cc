#include <iostream>
#include <vector>
using namespace std;


typedef vector<char> Fila;
typedef vector<Fila> Rectangle;


void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols);


int main() {
  int n, m;
  while (cin >> n >> m) {
    Rectangle r(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) cin >> r[i][j];

    int t;
    cin >> t;
    while (t--) {
      char c;
      cin >> c;
      int fils, cols;
      dimensions_minimes(c, r, fils, cols);
      cout << fils << " " << cols << endl;
    }
  }
}

void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
    
    int midax = r[0].size();
    int miday = r.size();
    bool trobat = false;
    int j = 0;
    int i;
    int posicio_a = 0;
    int posicio_b = 0;
    int posicio_c = 0;
    int posicio_d = 0;
    //Columna
    while (not trobat) {
        i = 0;
        while (not trobat and i < miday) {
            
            if (r[i][j] == c) {
                posicio_a = j;
                trobat = true;
            }
            ++i;
        }
        ++j;
    }

    //Fila
    j = 0;
    i = 0;
    trobat = false;
    while (not trobat) {
        i = 0;
        while (not trobat and i < midax) {
            
            if (r[j][i] == c) {
                posicio_b = j;
                trobat = true;
            }
            ++i;
        }
        ++j;
    }

    //Columna 2
    j = midax - 1;
    i = 0;
    trobat = false;
    
    while (not trobat) {
        i = 0;
        while (not trobat and  i < miday) {
            
            if (r[i][j] == c) {
                posicio_c = j;
                trobat = true;
            }
            ++i;
        }
        --j;
    }

     //Fila 2
    j = miday - 1;
    i = 0;
    trobat = false;
    
    while (not trobat) {
        i = 0;
        while (not trobat and i < midax) {
            
            if (r[j][i] == c) {
                posicio_d = j;
                trobat = true;
            }
          ++i;  
        }
        --j;
    }
    fils = posicio_d - posicio_b + 1;
    cols = posicio_c - posicio_a + 1;
}
