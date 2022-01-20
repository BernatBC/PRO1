#include <iostream>
#include <vector>
using namespace std;

vector<bool> pos_rampas(const vector<int>& B) {
    
    vector<bool> posi(B.size(), false);
    
    for (int i = 2; i < posi.size(); ++i) {
        
        if ((B[i] < B[i - 1] and B[i - 1] < B[i - 2]) or (B[i] > B[i - 1] and B[i - 1] > B[i - 2])) {
            
            posi[i - 2] = true;
            
        }
        
    }
    
    return posi;
    
}

int pot_conflictives(const vector<bool>& B) {
    
    int confl = 0;
    
    for (int i = 2; i < B.size(); ++i) {
        
        if (B[i - 2] == true and B[i - 1] == true) {
            ++confl;
        }
        if (B[i] == true and B[i - 2] == true) {
            ++confl;
        }
        
    }
    return confl;
}

int main() {
    
    int n;
    while (cin >> n) {
        
        vector<int> seq(n);
        
        for (int i = 0; i < n; ++i) {
            
            int num;
            cin >> num;
            seq[i] = num;
            
        }
        
        vector<bool> pos = pos_rampas(seq);
        
        cout << "posicions amb rampa:";
        for (int i = 0; i < pos.size(); ++i) {
            
            int a = i*pos[i];
            
            if (pos[i]) {
                cout << " " << a;
            }
            
        }
        cout <<endl;
        int b = pot_conflictives(pos);
        cout << "potencialment conflictives: " << b <<endl;
        cout << "---" <<endl;
    }    
}
