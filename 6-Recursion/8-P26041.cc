#include <iostream>
#include <string>
using namespace std;

void girar_llista();

int main() {
    
    girar_llista();
    
}

void girar_llista() {
    
    string input;
    
    if(cin >> input){
        
        girar_llista();
        cout << input <<endl;
        
    }
    
}
