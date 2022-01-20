#include <iostream>
using namespace std;


bool es_creixent(int n);


int main() {
    int n;
    while (cin >> n) cout << (es_creixent(n) ? "true" : "false") << endl;
}

bool es_creixent(int n){
    
    if (n/10 == 0) {
        
        return true;
    }
    
    if (n%10 >= (n%100)/10) {
        
        return es_creixent(n/10);
        
    }
    else {
        
        return false;
        
    }
    
    
}
