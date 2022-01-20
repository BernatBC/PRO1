#include <iostream>
using namespace std;

int main(){
    
    int a;
    
    while (cin >> a){
        
        int r = 0;
        int b = a;
        while (b != 0){
            
            r = r + b%10;
            b = b/10;
            
        }
        
        cout << "La suma dels digits de " << a << " es " << r << "." <<endl;
        
    }
    
    return 0;
}
