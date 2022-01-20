#include <iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double input, add;
    add = 0.0;
    double num = 0.0;
    
    while(cin >> input){
        
        add = add + input;
        num = num + 1.0;
    }
    double mitjana = add / num;
    cout << mitjana <<endl;  
    
    return 0;
}
