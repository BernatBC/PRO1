#include <iostream>
using namespace std;


bool es_any_de_traspas(int any);


int main() {
    int a;
    while (cin >> a) cout << (es_any_de_traspas(a) ? "true" : "false") << endl;
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
