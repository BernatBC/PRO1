#include <iostream>
#include <string>
using namespace std;

int girar_llista(int i);

int main() {
    
    int i = 1;
    girar_llista(i);
    
}

int girar_llista(int i) {
    
    string input;
    ++i;
    
    if(cin >> input){
        
        int vegada = girar_llista(i);
        
        if (i <= vegada/2) {
            
            cout << input <<endl;
            
        }
        
        return vegada;
        
    }
    return i;
}
