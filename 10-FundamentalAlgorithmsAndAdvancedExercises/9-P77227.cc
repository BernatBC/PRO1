#include <iostream>
#include <vector>
using namespace std;


string sortida(int p, vector<int>& v) {
    
    int llargada = v.size();
    vector<bool> repetit(llargada, false);
    
    
    while (not repetit[p]) {

        repetit[p] = true;
        
        p += v[p];
        
        if (p < 0) {
            
            return "esquerra";
            
        }
        else if (p >= llargada) {
            
            return "dreta";
            
        }
        
    }
    return "mai";
}


int main() {
  int p, n;
  while (cin >> p >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    cout << sortida(p, v) << endl;
  }
}
