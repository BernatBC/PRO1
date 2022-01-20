#include <iostream>
using namespace std;

int main(){
    
    int files, columnes;
    cin >> files >> columnes;
    
    int monedes = 0;
    
    for (int i = 0; i < files; ++i){
        
            for(int j = 0; j < columnes; ++j){
                
                char num;
                cin >> num;
                
                if((i + j)%2 == 0){
                    monedes += num - char('0');
                }
                
            }
    }
    
    cout << monedes <<endl;
    
    return 0;
}
