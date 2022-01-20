#include <iostream>
#include <string>
using namespace std;

void girar_llista(bool fi);

int main() {
    
    bool fi = false;
    girar_llista(fi);
    
}

void girar_llista(bool fi) {
    
    string input;
    
    if (cin >> input) {
        
        if (input == "fi") {
            
            fi = true;
            
        }
        else {
            
            girar_llista(fi);
            cout << input <<endl;  
            
        }
        
    }
    
}
