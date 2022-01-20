#include <iostream>
using namespace std;

int main(){
    
    int files, columnes;
    cin >> files >> columnes;
    
    int monedes = 0;
    
    for (int i = 1; i <= files; ++i){
        
        for (int j = 1; j <= columnes; ++j){
            
            char num;
            cin >> num;
            
            monedes += num - char('0');
            
        }
        
    }
    
    cout << monedes <<endl;
    
    return 0;
}
