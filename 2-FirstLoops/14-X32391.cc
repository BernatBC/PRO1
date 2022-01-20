#include <iostream>

using namespace std;

int main(){
    
    int d, n, t;
    cin >> d >> n >> t;
    
    int cont = 0;
    
    for (int i = 0; i < t; ++i){
        int a;
        cin >> a;
        
        n = n - d + a;
        
        if(n > 0){
            ++cont;
        }
    }
    
    cout << cont <<endl;
    
    return 0;
}
