#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<string> paraules;
    
    for (int i = 0; i < n; ++i) {
        
        string input;
        cin >> input;
        paraules.push_back(input);

    }
    
    int cont = paraules.size();
    
    for (int j = cont - 1; j >= 0; --j) {
        
        string paraula = paraules[j];
        int llargada = paraula.size();
        
        for (int k = llargada - 1; k >= 0; --k) {
            
            cout << paraula[k];
            
        }
        
        cout <<endl;
        
    }
    
    
}
