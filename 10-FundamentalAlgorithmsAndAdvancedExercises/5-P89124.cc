#include <iostream>
#include <vector>
using namespace std;

vector<bool> es_primer(int num);

int main() {
    
    int num;
    vector<bool> taulell2 = es_primer(1000000);
    
    while (cin >> num) {
    
    if (num == 0 or num == 1) {
        
        cout << num << " no es primer" <<endl;
        
    }
    else {
        
        if (taulell2[num]) {
            cout << num << " es primer" <<endl;
        }
        else {
            cout << num << " no es primer" <<endl;
        }
        
    }
    }
}

vector<bool> es_primer(int num) {
    
    vector<bool> numeros(num + 1, true);
    
    for (int i = 2; i <= num; ++i) {
        
        if (numeros[i] == true) {
            
            
            for (int j = 2*i; j <= num; j = j + i) {
                
                numeros[j] = false;
                
            }
        }
        
    }
    
    return numeros;
    
}
