#include <iostream>
#include <vector>
using namespace std;


int posicio(double x, const vector<double>& v, int esq, int dre);


int main() {
    int n;
    while (cin >> n) {
        vector<double> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int esq, dre;
            cin >> x >> esq >> dre;
            cout << posicio(x, v, esq, dre) << endl;
        }
    }
}

int posicio(double x, const vector<double>& v, int esq, int dre) {
    
    if (esq > dre) {
        return -1;
    }
    else {
        
        int meitat = (esq + dre)/2;
        
        if (v[meitat] > x) {
            
            return posicio(x, v, esq, meitat - 1);
            
        }
        if (v[meitat] < x) {
            
            return posicio(x, v, meitat + 1, dre);
            
        }
            return meitat;

    }
    /*
    int meitat = (esq + dre)/2;
    
    if (v[meitat] == x) {
        
        return meitat;
        
    }
    else if (esq > dre) {
        
        return -1;
        
    }
    else {
        
        if (v[meitat] > x) {
            
            return posicio(x, v, esq, meitat);
            
        }
        else {
            
            return posicio(x, v, meitat, dre);
            
        }
        
    }
    */
}
