#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int input;
    
    while(cin >> input){
        
        cout << input*input << " " << sqrt(input) <<endl;
        
    }
    
}
