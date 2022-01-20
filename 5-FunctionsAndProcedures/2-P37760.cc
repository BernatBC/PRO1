#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout.setf(ios::fixed),
    cout.precision(6);
    
    double PI = M_PI;
    double graus;
    
    while(cin >> graus){
        
        cout << sin(graus*PI/180) << " " << cos(graus*PI/180) <<endl;
        
    }
    
}
