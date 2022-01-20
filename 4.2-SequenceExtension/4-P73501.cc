#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        
        int num;
        int num2 = 0;
        int cont = 0;
        
        while (cin >> num and num != 0){
            
            if(num2 == 0){
                num2 = num;
            }else{
            
                if(num > num2){
                    ++cont;
                }
                
                num2 = num;
            }
        }
        cout << cont <<endl;
    }
    
}
