#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<int> sequencia(n);
    int input;
    int contador = 0;
    
    for (int i = 0; i < n; ++i) {
        
        cin >> input;
        sequencia[i] = input;
        
    }
    
    for (int i = 0; i < n - 1; ++i) {
        
        if (sequencia[i] == input) {
            ++contador;
        }
        
    }
    cout << contador <<endl;
    
}
