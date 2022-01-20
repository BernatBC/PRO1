#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string paraula, next;
    int contador = 1;
    int max_contador = 1;
    
    cin >> paraula;
    
    while (cin >> next){
        
        if(paraula == next){
            ++contador;
        } else{
            
            contador = 0;
        }
        
         if (contador > max_contador){
                max_contador = contador;
            }
    }
    
    cout << max_contador <<endl;
    
}
