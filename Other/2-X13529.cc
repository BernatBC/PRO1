#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int num;
    
    while (cin >> num) {
        
        //Obtenir vector
        vector<int> sequencia(num);
        
        for (int i = 0; i < num; ++i) {
            
            cin >> sequencia[i];
            
        }
        
        //Tractar sequencia
        bool repetit = false;
        int pos = 0;
        int pos_f;
        
        while (not repetit and pos < num - 1) {
            
            for (int i = pos + 1; i < num; ++i) {
                
                if (sequencia[pos] == sequencia[i]) {
                    
                    repetit = true;
                    pos_f = i;
                    
                }
                
            }
            ++pos;
        }
        
        if (not repetit) {
            cout << "NO" <<endl;
        }
        else {
            cout << sequencia[pos_f] << " " << pos_f <<endl;
        }
        
    }
    
}
