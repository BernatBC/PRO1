#include <iostream>
using namespace std;

int seguent_riu(int n){
    
    int suma = n;
    
    while (n > 0) {
        
        suma += n%10;
        n = n/10;
    }
    
    return suma;
    
}

int trobada_de_rius (int n) {
    
    int riu_1 = 1;
    int riu_3 = 3;
    int riu_9 = 9;
    bool trobat = false;
    
    while (not trobat) {
        
        while (riu_1 < n) {
            riu_1 = seguent_riu(riu_1);
        }
        while (riu_3 < n) {
            riu_3 = seguent_riu(riu_3);
        }
        while (riu_9 < n) {
            riu_9 = seguent_riu(riu_9);
        }
        
        if (riu_1 == n or riu_3 == n or riu_9 == n) {
            
            trobat = true;
            
        }
        else {
            
            n = seguent_riu(n);
            
        }
        
    }

    return n;
}

int main ()
{
    int n;
    while (cin >> n) {
        cout << n << " " << trobada_de_rius(n) << endl;
    }
}
