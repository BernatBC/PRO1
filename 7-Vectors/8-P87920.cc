#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    while (cin >> n){
        int suma = 0;
        vector<int> sequencia(n);
        
        for (int i = 0; i < n; ++i) {
            
            int num;
            cin >> num;
            sequencia[i] = num;
            suma += num;
            
        }
        
        int llargada = sequencia.size();
        bool es_suma = false;
        
        for (int i = 0; i < llargada; ++i) {
            
            if (sequencia[i] == suma - sequencia[i]) {
                
                es_suma = true;
                
            }
            
        }
        
        if (es_suma) {
            cout << "YES" <<endl;
        }
        else {
            cout << "NO" <<endl;
        }
    }
}
