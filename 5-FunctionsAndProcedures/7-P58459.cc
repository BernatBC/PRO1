#include <iostream>
using namespace std;


bool es_data_valida(int d, int m, int a);
bool es_any_de_traspas(int any);


int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (es_data_valida(d, m, a) ? "true" : "false") << endl;
}

bool es_data_valida(int d, int m, int a){
    
    bool valid = true;
    
    bool any_traspas = es_any_de_traspas(a);
    
    if(a < 1800 or a > 9999 or m < 1 or m > 12 or d > 31 or d < 1){
        valid = false;
    }
    
    if(m == 2 and d > 29){
        
        valid = false;
    }
    
    if(!any_traspas and m ==2 and d >= 29){
        
        valid = false;
        
    }
    
    if((m == 4 and d == 31) or (m == 6 and d == 31) or (m == 9 and d == 31) or (m == 11 and d == 31)){
        
        valid = false;
        
    }
    
    return valid;
    
}

bool es_any_de_traspas(int any){

    bool traspas;
    
    if(any%100 == 0){
        
        any = any/100;
        
    }
    
    if(any%4 == 0){
        
        traspas = true;
        
    }else{
        
        traspas = false;
        
    }
    
    return traspas;
    
}
