#include <iostream>
using namespace std;

int main (){
    
    char lletra;
    int cont = 0;    
    
    while (cin >> lletra) {
        
        if (lletra == 'a' or lletra == 'e') {
            ++cont;
        }
        else if (lletra == 'o' or lletra == 's') {
            cont += 2;
        }
        else if (lletra == 'd' or lletra == 'i' or lletra == 'n' or lletra == 'r') {
            cont += 3;
        }
        else if (lletra == 'c' or lletra == 'l' or lletra == 't' or lletra == 'u') {
            cont += 4;
        }
        else if (lletra == 'm' or lletra == 'p') {
            cont += 5;
        }
        else if (lletra == 'k' or lletra == 'w') {
            cont += 7;
        }
        else {
            cont += 6;
        }
        
    }
    
    cout << cont <<endl;
    
}
