#include <iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double z, c, aux;
    double p = 0.0;
    
    cin >> z;
    aux = z;
    
    cin >> c;
    p += c;
    
    while (cin >> c){
        
        p += c*z;
        z = z * aux;

    }
    
    cout << p <<endl;
    
}
