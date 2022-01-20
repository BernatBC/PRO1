#include <iostream>
using namespace std;

int main(){
    
    int num, times;
    
    cin >> times;
    
    for (int i = 0; i < times; ++i){
    
    cin >> num;
        
        bool is_prime = false;
        
        cout << num;
        
        if(num > 3){
        
            int j = 3;
            
            if(num%2 != 0){
            
            while (not is_prime and num%j != 0){
            
                if(num < j * j and num != 1){
                    
                    is_prime = true;
                
                }
            
            j += 2;
        }}
        } else{
            
            if(num > 1){
                is_prime = true;
            }
            
        }
        
        if (is_prime){
            
            cout << " es primer" <<endl;
            
        }else {
        
            cout << " no es primer" <<endl;
            
        }
        
    }
    
    return 0;
}
