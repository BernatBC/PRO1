#include <iostream>
using namespace std;

int main(){
    
    int n;
    
    while (cin >> n){
    
        //imprimir 1a secció
        for (int i = 1; i < n; ++i){
            
            //imprimir espais
             for (int j = 0; j < n - i; ++j){
                
                cout << " ";
                
            }
            
            //imprimir Xs
            for(int k = 0; k < n + 2*i - 2; ++k){
                cout << "X";
            }
            
            cout <<endl;
        }
        
        //imprimir 2a secció
        for(int i = 0; i < n; ++i){
            for(int k = 0; k < 3*n - 2; ++k){
                cout << "X";
            }
            cout <<endl;
        }
        
        //imprimir 3a secció
        for (int i = n - 1; i > 0; --i){
            
            //imprimir espais
             for (int j = 0; j < n - i; ++j){
                
                cout << " ";
                
            }
            
            //imprimir Xs
            for(int k = 0; k < n + 2*i - 2; ++k){
                cout << "X";
            }
            
            cout <<endl;
        }
        cout <<endl;
    }
    
    return 0;
}
