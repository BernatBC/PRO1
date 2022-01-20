#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char lletra_mes_frequent(const string& s);

int main() {
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int n;
    double llargada = 0.0;
    cin >> n;
    
    vector<string> s(n);
    
    //Omplir vector
    for (int i = 0; i < n; ++i) {
        
        string input;
        cin >> input;
        llargada += input.size();
        s[i] = input;
        
    }
    
    //Calcular mitjana
    llargada = llargada/n;
    cout << llargada <<endl;
    
    //Buscar lletra mes frquent
    
    for (int i = 0; i < n; ++i) {
        
        if (s[i].size() >= llargada) {
        
            cout << s[i] << ": ";
            char lletra = lletra_mes_frequent(s[i]);
            cout << lletra <<endl;
        }
    }
    
}

char lletra_mes_frequent(const string& s) {
    
    string v = s;
    
    sort(v.begin(), v.end());
    int llargada = v.size();
    int cont = 1;
    int max = 1;
    char freq = v[0];
    
    for (int k = 1; k < llargada; ++k) {
        
        if (v[k] == v[k - 1]) {
            
            ++cont;
            
        }
        else {
            
            cont = 1;
            
        }
        
        if (cont > max) {
            
            max = cont;
            
            freq = v[k];
            
        }
        else if (cont == max and v[k] < freq) {
            
            freq = v[k];
            
        }
        
    }
    
    return freq;
}
