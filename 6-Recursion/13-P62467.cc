#include <iostream>
using namespace std;

void linia(int i);

int main() {
    
    int input;
    cin >> input;
    linia(input);
    
}

void linia(int i) {
    
    if (i > 0) {
        
        linia(i - 1);
        
        for (int j = 0; j < i; ++j) {
            
            cout << "*";
            
        }
        
        cout <<endl;
        
        linia(i - 1);
        
        
    }
    
}
