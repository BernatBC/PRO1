#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
    
    if (time_1 < time_2) {
        return time_2 - time_1;
    }
    else {
        return 60 + time_2 - time_1;
    }
    
}

int main() {
    
    int limit, t1, t2;
    int posicio = 2;
    int temps_total = 0;
    bool trobat = false;
    cin >> limit;
    cin >> t1;
    cin >> t2;
    
    while (t2 != -1) {
        
        int temps = time_lapse(t1, t2);
        temps_total += temps;
        
        if (temps_total > limit) {
            trobat = true;
        }
        
        if (not trobat) {
            ++posicio;
        }
        
        t1 = t2;
        cin >> t2;
    }
    
    if (not trobat) {
        posicio = 0;
    }
    
    cout << posicio <<endl;
}
