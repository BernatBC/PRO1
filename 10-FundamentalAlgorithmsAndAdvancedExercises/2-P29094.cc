#include <iostream>
#include <vector>
using namespace std;


int posicio_maxim(const vector<double>& v, int m);


int main() {
  int m, n;
  while (cin >> m >> n) {
    vector<double> V(n);
    for (int i = 0; i < n; ++i) cin >> V[i];
    cout << posicio_maxim(V, m) << endl;
  }
}

int posicio_maxim(const vector<double>& v, int m) {
    
    double max = v[0];
    int posicio = 0;
    
    for (int i = 1; i < m + 1; ++i) {
        
        if (v[i] > max) {
            max = v[i];
            posicio = i;
        }
        
    }
    return posicio;
}
