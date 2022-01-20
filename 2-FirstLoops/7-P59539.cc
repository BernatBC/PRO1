#include <iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int num;
    cin >> num;
    
    int i = 1;
    double r = 0.0000;
    
    while(i <= num){
        
        r = r + 1.0 / i;
        i++;
        
    }
    
    cout << r <<endl;
    
    return 0;
}
