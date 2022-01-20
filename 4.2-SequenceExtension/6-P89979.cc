#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n;
    int linia = 0;
    bool done = false;
    
    while (not done and cin >> n){
        
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
            done = true;
            cout << "La primera linia ordenada creixentment es la " << linia << "." <<endl;
        }
    
    }
    
    if(not done){
        cout << "No hi ha cap linia ordenada creixentment." <<endl;
    }
    
}
