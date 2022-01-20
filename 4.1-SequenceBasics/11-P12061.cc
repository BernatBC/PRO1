#include <iostream>
#include <string>
using namespace std;

int main(){
    
    bool is_principi = false;
    bool is_final = false;
    bool is_valid = false;   
    string paraula;
    int contador = 0;
    
    while (cin >> paraula and not is_final){
        
        if (paraula == "principi"){
            is_principi = true;
            is_valid = false;
        } else if (paraula == "final"){
            is_final = true;
            is_valid = false;
        }
        
        if(is_principi and is_valid){
            ++contador;
        }
        is_valid = true;
    }
    
    if (not is_principi or not is_final){
        cout << "sequencia incorrecta" <<endl;
    } else {
        cout << contador <<endl;
    }
    
}
