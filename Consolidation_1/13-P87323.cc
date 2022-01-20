#include <iostream>
using namespace std;

int main(){
    
    int f, c;
    
    cin >> f >> c;
    
    for (int i = 0; i < f; ++i){
        
        int num = i%10;
        
        for(int j = 0; j < c and j <= i; ++j){
            
            cout << num;
            --num;
            
            if(num == -1){
                num = 9;
            }
            
        }
        
        for(int k = 1; k < c - i; ++k){
            
            cout << k%10;
            
        }
        
        cout <<endl;
    }
}
