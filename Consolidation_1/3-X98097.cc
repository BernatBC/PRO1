#include <iostream>
using namespace std;

int main(){
    
    int parell = 0;
    int senar = 0;
    char num;
    bool es_parell = false;
    
    while (cin >> num){
        
        if(es_parell){
            
            parell += num - '0';
            es_parell = false;
            
        }else{
            
            senar += num - '0';
            es_parell = true;
            
        }
        
    }
    
    if(not es_parell){
        int aux = parell;
        parell = senar;
        senar = aux;
    }
    
    cout << senar << " " << parell <<endl;
    
   if(senar < parell){
       int i = 0;
       while (senar*i < parell and senar != 0){
           ++i;
        }
        if(senar*i == parell){
               cout << parell << " = " << i << " * " << senar <<endl;
        }else if(parell*i == senar){
            cout << senar << " = " << i << " * " << parell <<endl;
        }else{
            cout << "res" <<endl;
        }
    }else{
        int i = 0;
       while (parell*i < senar and parell != 0){
           ++i;
        }

        if(parell*i == senar){
               cout << senar << " = " << i << " * " << parell <<endl;
        }else if(senar*i == parell){
            cout << parell << " = " << i << " * " << senar <<endl;
        }else{
            cout << "res" <<endl;
        }
        
    } 
    
}
