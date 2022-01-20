#include <iostream>
using namespace std;

int main(){
    
    int b, n;
    
    while (cin >> b >> n){
        
        int x = 0;
        
        while(n >= 1){
            
            n = n/b;
            ++x;
            
        }
        
        cout << x <<endl;
    }
    
    return 0;
}
