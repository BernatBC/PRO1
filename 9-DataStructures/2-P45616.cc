#include <typeinfo>
#include <iostream>
using namespace std;

struct Rellotge {
         int h;      // hores (0<=h<24)
         int m;      // minuts (0<=m<60)
         int s;      // segons (0<=s<60)
     };

Rellotge mitja_nit ();
void incrementa (Rellotge& r);
void escriu (const Rellotge& r);


int main () 
{
    Rellotge r = mitja_nit();
    for (int i=0; i<=25*60*60; ++i) {
        escriu(r);
        incrementa(r);
    }
    return 0;
}

void incrementa (Rellotge& r) {
    
    ++r.s;
    
    if (r.s >= 60) {
        
        r.s = 0;
        ++r.m;
        
        if (r.m >= 60) {
            
            r.m = 0;
            ++r.h;
            
            if (r.h >= 24) {
                
                r.h = 0;
                
            }
            
        }
        
    }
    
}

void escriu (const Rellotge& r) {
    
    if (r.h < 10) cout << "0";
    cout << r.h << ":";
    if (r.m < 10) cout << "0";
    cout << r.m << ":";
    if (r.s < 10) cout << "0";
    cout << r.s << endl;
    
    
}

Rellotge mitja_nit () {
    
    Rellotge a;
    a.s = 0;
    a.m = 0;
    a.h = 0;
    
    return a;
    
}
