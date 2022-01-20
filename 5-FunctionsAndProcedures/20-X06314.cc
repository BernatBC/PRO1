#include <iostream>
using namespace std;

int psuma = 0;
int pultim = 0;
int cont = 1;

void info_sequencia(int& suma, int& ultim);

int main(){
    
    int input;
    int ultim = 0;
    int suma = 0;
    
    while(cin >> input and input != 0){
        
        psuma += input;
        pultim = input; 
        
    }
    
    while(cin >> input){
        
        if(input == 0){
            
            info_sequencia(suma, ultim);
            suma = 0;
            
        }else{
            
            suma += input;
            ultim = input;
            
        }
        
    }
    
    cout << cont <<endl;
    
}

void info_sequencia(int& suma, int& ultim){
    
    if(suma == psuma and ultim == pultim){
        
        ++cont;
        
    }
    
}
