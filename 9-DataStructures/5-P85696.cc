#include <typeinfo>
#include <iostream>
using namespace std;

struct Racional {
         int num, den;
     };

Racional racional(int n, int d);


int main() {

  int num, den;
  while (cin >> num >> den) {
    Racional r = racional(num, den);
    cout << r.num << " " << r.den << endl;
  }
}

Racional racional(int n, int d) {
    
    Racional a;
    a.num = n,
    a.den = d;
    
    if (a.num == 0) {
        
        a.num = 0;
        a.den = 1;
        return a;
        
    }
    
    if (a.den < 0) {
        
        a.num = -a.num;
        a.den = -a.den;
        
    }
    
    bool be = true;
    int b = a.num;
    int c = a.den;
    
    int mcd = 1;
    
    if (b < 0) b = -b;
    if(c < 0) c = -c;
    
    while (be) {
        
        if (b > c) {
            
            int aux = b%c;
            
            if (aux == 0) {
                be = false;
                mcd = c;
            }
            else {
                b = aux;
            }

        }
        else {
            
            int aux = c%b;
            
            if (aux == 0) {
                be = false;
                mcd = b;
            }
            else {
                c = aux;
            }
            
        }
    }
    a.num = a.num/mcd;
    a.den = a.den/mcd;
    return a;
    
}
