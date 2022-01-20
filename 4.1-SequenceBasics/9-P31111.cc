#include <iostream>
using namespace std;

int main(){
    
    char input;
    
    int contador = 0;
    
    bool correct = true;
    
    while (correct and cin >> input){
        
        if(input == '('){
            ++contador;
        } else {
            --contador;
        }
        
        if (contador < 0){
            correct = false;
        }
        
    }
    
    if(correct and contador == 0){
        cout << "si" <<endl;
    } else{
        cout << "no" <<endl;
    }
    
}
