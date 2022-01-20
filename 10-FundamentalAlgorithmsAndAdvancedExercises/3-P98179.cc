#include <iostream>
#include <vector>
using namespace std;


void insereix(vector<double>& v);


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i=0; i<n; ++i) {
            cin >> V[i];
        }
        insereix(V);
        for (int i=0; i<n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}

void insereix(vector<double>& v) {
    
    int i = v.size() - 1;
    
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
