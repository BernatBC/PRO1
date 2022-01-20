#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; ++i){
        
        int plus = n - i;
        
        for (int j = 1; j <= plus; ++j){
            cout << "+";
        }
        
        cout << "/";
        
        int multip = i - 1;
        
        for (int k = 1; k <= multip; ++k){
            cout << "*";
        }
        
        cout <<endl;
        
    }

    return 0;
}
