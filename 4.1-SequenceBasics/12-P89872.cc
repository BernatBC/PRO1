#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string prim = "";
    string seg = "";
    string par = "";
    
    cin >> prim;
    
    while (cin >> par){
        
        if ( par != prim) {
       
            if(par > prim){
                
                seg = prim;
                prim = par;
                
                
            } else if (par >= seg){
                
                seg = par;
                
            }
        }
        
    }
    
    cout << seg <<endl;
    
}


