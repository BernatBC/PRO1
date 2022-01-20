#include <iostream>
using namespace std;


int factorial(int n);


int main() {
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
}   }

int factorial(int n){
    
    if(n == 1 or n == 0){
        
        return 1;
        
    }
    
    return n*factorial(n-1);
    
}
