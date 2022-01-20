#include <iostream>
#include <cmath>
#include <string>

using namespace std;



int main(){
    
    cout.setf(ios::fixed);
    cout.precision(6);
    
    double PI = M_PI;
    
    int times;
    cin >> times;
    
    for (int i = 1; i <= times; ++i){
        
        string type;
        cin >> type;
        
        if(type == "rectangle"){
            
            double a, b;
            cin >> a >> b;
            cout << a*b <<endl;
            
        }else if(type == "cercle"){
            double r;
            cin >> r;
            cout << PI*r*r <<endl;
        }
        
    }
    
    return 0;
}
