#include <iostream>
using namespace std;


bool es_capicua(int n);


int main() {
    int n;
    while (cin >> n) cout << (es_capicua(n) ? "true" : "false") << endl;
}

bool es_capicua(int n){
    
    int llargada = 1;
    int num = n;
    bool capicua = true;
    
    while (num/10 > 0){
        
        num /= 10;
        ++llargada;
        
    }
    
    int a = n;
    int b = 0;
    
    if(llargada%2 == 1){
        
        a /= 10; 
        
    }
    
    llargada /= 2;
    
    for(int i = 0; i < llargada; ++i){
        
        a /= 10;
        
    }
    
    for(int j = 0; j < llargada; ++j){
        
        b = b*10 + n%10;
        n /= 10;
       
    }
    
    if(a != b){
        capicua = false;
    }
    
    return capicua;
    
}
