#include <iostream>
using namespace std;

int main(){
    
    int n;
    int monedes = 0;
    cin >> n;
    
    for (int i = 1; i <= n; ++i){
        
        for (int j = 1; j <= n; ++j){
            
            char num;
            cin >> num;
            
            if(i == j or i + j == n + 1){
            
            monedes += num - '0';
            }
        }
        
    }
    cout << monedes <<endl;
}
