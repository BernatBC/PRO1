#include <iostream>
#include <string>
using namespace std;

int girar_llista(int vegades);

int main() {
    
    int vegades;
    
    cin >> vegades;
    
    girar_llista(vegades);
    
}

int girar_llista(int vegades) {
    
    string input;
    
    if (cin >> input) {
        
        vegades = girar_llista(vegades);
        
        if (vegades > 0) {
            
            cout << input <<endl;
            --vegades;

            return vegades;
            
        }
        
        return 0;

    }
    else {
        
        return vegades;
        
    }
    
}
