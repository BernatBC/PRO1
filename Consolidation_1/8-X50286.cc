#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int contador = 0;
    string paraula;
    
    while(cin >> paraula){
        
        if(paraula == "hola"){
            ++contador;
        }
        
    }
    cout << contador <<endl;
}
