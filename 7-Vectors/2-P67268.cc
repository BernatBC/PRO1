#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int llargada;
    while (cin >> llargada) {
        vector<int> sequencia(llargada);
        
        for (int i = 0; i < llargada; ++i) {
            
            int n;
            cin >> n;
            sequencia[i] = n;
            
        }
        
        for (int i = llargada - 1; i >= 0; --i) {
            
            if (i != llargada - 1) {
                cout << " ";
            }
            
            cout << sequencia[i];
            
        }
        
        cout <<endl;
    }
}
