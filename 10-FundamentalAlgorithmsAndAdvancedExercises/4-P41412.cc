#include <iostream>
#include <vector>
using namespace std;


void ordena_per_insercio(vector<double>& v);


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        ordena_per_insercio(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}

void ordena_per_insercio(vector<double>& v) {
    
    for (int k = 0; k < v.size(); ++k) {
        
        int i = k;
        
        bool posicio = false;
    
    while (not posicio and i != 0) {
        
        if (v[i] < v[i - 1]) {
            
            double a = v[i];
            v[i] = v[i - 1];
            v[i - 1] = a;
            
        }
        --i;
    }
        
    }
}
