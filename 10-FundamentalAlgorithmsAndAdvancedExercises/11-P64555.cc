#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Punt{
    int x, y, dis;
};

bool ord(const Punt&a, const Punt&b) {
    
    if (a.dis < b.dis) {
        return true;
    }
    else if (a.dis == b.dis) {
        if (a.x < b.x) {
            return true;
        }
        else if (a.x == b.x) {
            if (a.y < b.y) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    
    Punt punt_a;
    
    cin >> punt_a.x >> punt_a.y;
    
    int n_punts;
    
    cin >> n_punts;
    
    vector<Punt> dades(n_punts);
    
    for (int i = 0;i < n_punts; ++i) {
        
        cin >> dades[i].x >> dades[i].y;
        
        int disx = dades[i].x - punt_a.x;
        int disy = dades[i].y - punt_a.y;
        
        if (disx < 0) {
            
            disx = -disx;
            
        }
        
        if (disy < 0) {
            
            disy = -disy;
            
        }
        
        dades[i].dis = disx + disy;
        
    }
    
    sort(dades.begin(), dades.end(), ord);
    
    for (int i = 0; i < n_punts; ++i) {
        
        if (i == 0 or dades[i].dis != dades[i - 1].dis) {
            cout << "punts a distancia " << dades[i].dis <<endl;
        }
        cout << dades[i].x << " " << dades[i].y <<endl;
    }
    
}
