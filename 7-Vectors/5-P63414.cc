#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<int> sequencia(n);
    
    //Omplir vector
    for (int i = 0; i < n; ++i) {
        
        cin >> sequencia[i];
        
    }
    sort(sequencia.begin(), sequencia.end());
    
    int cont = 1;
    
    for (int i = 0; i < n; ++i) {
        
        if (i == 0) {
            
            cout << sequencia [i] << " : ";
            
        }
        else if (sequencia[i - 1] == sequencia[i]) {
            
            ++cont;
            
        }
        else {
            
            cout << cont <<endl;
            cout << sequencia [i] << " : ";
            cont = 1;
            
            
        }
    }
    
    if (n != 0) {
    
    cout << cont <<endl;
    
    }
}
