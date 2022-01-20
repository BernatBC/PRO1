#include <iostream>
#include <vector>
using namespace std;

bool suma_primers(int num);

int main() {
    
    int n;
    while (cin >> n) {
    
        vector<int> sequencia(n);
        
        for (int i = 0; i < n; ++i) {
            
            int input;
            cin >> input;
            
            sequencia[i] = input;
            
        }
        
        bool primer = false;
        int j = 0;
        
        while (not primer and j < n - 1) {
            
            int k = j + 1;
            
            while (not primer and k < n) {
                
                primer = suma_primers(sequencia[j] + sequencia[k]);
                ++k;
            }
            ++j;
        }
        
        if (primer) {
            cout << "si" <<endl;
        }
        else{
            cout << "no" <<endl;
        }
    }
}

bool suma_primers(int num) {
    
    int i = 2;
    bool es_primer = true;
    
    if (num == 1 or num == 0) {
        return false;
    }
    
    while (es_primer and i*i <= num) {
        
        if (num%i == 0) {
            
            es_primer = false;
            
        }
        
        ++i;
        
    }
    return es_primer;
}
