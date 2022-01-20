#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool conte(string s1, string s2) {
    
    int llargada1 = s1.size();
    int llargada2 = s2.size();
    
    for (int i = 0; i < llargada1; ++i) {
        
        if (s1[i] == s2[0]) {
            
            int cont = 0;
            bool conte = true;
            
            while (conte and cont < llargada2) {
                
                if (s1[i + cont] == s2[cont]) {
                    
                    ++cont;
                    
                }
                else {
                    conte = false;
                }
                
            }
            
            if (conte) {
                
                return true;
            }
            
        }
        
    }
    
    return false;
}

int main() {
    
    int n;
    cin >> n;
    vector<string> seq(n);
    
    for (int i = 0; i < n; ++i) {
        
        string paraula;
        cin >> paraula;
        seq[i] = paraula;
        
    }
    
    for (int j = 0; j < n; ++j) {
        
        cout << seq[j] << ":";
        
        for (int k = 0; k < n; ++k) {
            
            bool infix = conte(seq[j], seq[k]);
            
            if (infix) {
                
                cout << " " << seq[k];
                
            }
            
        }
        cout <<endl;
    }
    
}
