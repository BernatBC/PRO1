#include <iostream>
using namespace std;

int main(){
    
    char letter = ' ';
    int contador = 0;
    
    while(letter != '.' and cin >> letter){
        
        if(letter == 'a'){
            ++contador;
        }
        
    }
    
    cout << contador <<endl;
    
    return 0;
}
