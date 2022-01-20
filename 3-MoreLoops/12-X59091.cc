#include <iostream>
using namespace std;

int main(){
    
    int n, m;

    bool first_time = true;
    
    while (cin >> n >> m){
        
        if(first_time){
            first_time = false;
        } else{
            cout <<endl;
        }
            int cont = 9;
        
        for (int i = 0; i < n; ++i){
            
            for (int j = 0; j < m; ++j){
                
                cout << cont;
                
                --cont;
                
                if(cont == -1){
                    cont = 9;
                }
            }
            cout <<endl;
        }

    }
    
    return 0;
}
