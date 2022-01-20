#include <iostream>
#include <vector>
using namespace std;

struct Punt {

    double x,y;

};

bool elements_dif(const vector<Punt>& v);
bool baricentre (const vector<Punt>& v, Punt& b); 

int main() {
    
    cout.setf(ios::fixed);
    cout.precision(2); 
    
    int n;
    
    while (cin >> n) {
        
        vector<Punt> v(n);
        Punt b;
        b.x = 0;
        b.y = 0;
        
        for (int i = 0; i < n; ++i) {
            
            Punt c;
            cin >> c.x >> c.y;
            v[i].x = c.x;
            v[i].y = c.y;
            b.x += c.x;
            b.y += c.y;
            
        }
        
        bool suma_igual = false;
        
        if (b.x == b.y) {
            suma_igual = true;
        }
        
        b.x = b.x/n;
        b.y = b.y/n;
        
        cout << "baricentre: (" << b.x << "," << b.y << ")" <<endl;
        
        if (not elements_dif(v)) {
            cout << "el vector no compleix la propietat 1" <<endl;
        }
        else if (not suma_igual) {
            cout << "el vector no compleix la propietat 2" <<endl;
        }
        else if (baricentre(v, b)) {
            cout << "el vector no compleix la propietat 3" <<endl;
        }
        else {
            cout << "vector normalitzat" <<endl;
        }
        
        
    }
    
}

bool elements_dif(const vector<Punt>& v) {
    
    bool diferents = false;
    int i = 0;
    int llargada = v.size();
    
    while (not diferents and i < llargada) {
        
        int j = i + 1;
        
        while (not diferents and j < llargada) {
            
            if (v[i].x != v[j].x or v[i].y != v[j].y) {
                diferents = true;
            }
            ++j;
        }
        
        ++i;
    }
    
    return diferents;
}

bool baricentre (const vector<Punt>& v, Punt& b) {
    
    bool inclos = false;
    int n_punts = v.size();
    int i = 0;
    
    while (not inclos and i < n_punts) {
        
        if (v[i].x == b.x and v[i].y == b.y) {
            inclos = true;
        }
        
        ++i;
    }
    return inclos;
}
