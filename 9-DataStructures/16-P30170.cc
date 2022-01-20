#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct repeticions {
    int vegades;
    int caracters;
};

bool ord(const string&a, const string&b);
bool ord2(const repeticions&a, const repeticions&b);

void actualitza(vector<repeticions>&, string paraula, int comptador);

int main() {
    
    int n;
    
    while (cin >> n) {
        
        vector<string> llista(n);
        
        for (int i = 0; i < n; ++i) {
            
            cin >> llista[i];
            
        }
        
        sort(llista.begin(), llista.end(), ord);
        
        vector<repeticions> rep;
        
        int comptador = 1;
        
        for (int i = 0; i < n; ++i) {
            
            if (i == n - 1 or llista[i] != llista[i + 1]) {
                
                actualitza(rep, llista[i], comptador);
                comptador = 1;
                
            }
            else {
                
                ++comptador;
                
            }
            
        }
        
        sort(rep.begin(), rep.end(), ord2);
        int s = rep.size();
        
        for (int j = 0; j < s; ++j) {
            
            cout << rep[j].vegades << " : " << rep[j].caracters <<endl;
            
        }
        cout <<endl;
    }
    
}

bool ord(const string&a, const string&b) {
    
    if (a.size() < b.size()) {
        return true;
    }
    else if (a.size() == b.size() and a < b) {
        return true;
    }
    
    return false;
}

bool ord2(const repeticions&a, const repeticions&b) {
    
    if (a.vegades < b.vegades) {
        return true;
    }
    else {
        return false;
    }
    
}

void actualitza(vector<repeticions>& rep, string paraula, int comptador) {
    
    if (rep.size() == 0) {
        
        repeticions a;
        a.caracters = paraula.size();
        a.vegades = comptador;
        rep.push_back(a);
        
    }
    else {
        
        bool passat = false;
        int i = 0;
        
        while (not passat and i < rep.size()) {
            
            if (rep[i].vegades == comptador) {
                
                rep[i].caracters += paraula.size();
                passat = true;
                
            }
            ++i;
        }
        
        if (not passat) {
            
            repeticions b;
            b.vegades = comptador;
            b.caracters = paraula.size();
            rep.push_back(b);
            
        }
    }
}
