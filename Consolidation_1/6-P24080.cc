#include <iostream>
using namespace std;

int main(){
    
    int n;
    bool first_time = true;
    
    while (cin >> n){
        
        if (not first_time){
            cout <<endl;
        }else{
            first_time = false;
        }
        
        for (int i = 0; i < n; ++i){
            
            for (int j = 0; j < n; ++j){
                cout << n;
            }
            cout <<endl;
        }

    }
    
}
