#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n;
    int linia = 0;
    int nlinia = 0;
    
    while (cin >> n){
        
        bool be = true;
        ++linia;
        string paraula2 = "A";
        
        for(int i = 0; i < n; ++i){
            
            string paraula1;
            cin >> paraula1;
            
            if(paraula2 != "A"){
                
                if(paraula1 < paraula2){
                    be = false;
                    
                }
                
            }

            paraula2 = paraula1;
            
        }
        
        if(be){

            nlinia = linia;
        }
    
    }
    
    if(nlinia != 0){
        cout << "L'ultima linia ordenada creixentment es la " << nlinia << "." <<endl;
    }else{
        cout << "No hi ha cap linia ordenada creixentment." <<endl;
    }
    
}
