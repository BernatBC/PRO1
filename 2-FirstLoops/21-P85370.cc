#include <iostream>
#include <string>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double c, interes;
    int t;
    string tipus;
    
    cin >> c >> interes >> t >> tipus;
    
    double r = 0.0;
    
    if(tipus == "simple"){
        
       r = c + c*interes*t/100; 
        
    }else{
        
        r = c;
        
        for(int i = 0; i < t; ++i){
            
            r = r + r*(interes/100);
            
        }
        
    }
    
    cout << r <<endl;
    
    return 0;
}
