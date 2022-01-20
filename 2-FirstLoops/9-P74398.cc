#include <iostream>
using namespace std;

int main(){
    
    int input;
    cin >> input;
    
    for(int i = 2; i <= 16; i++){
        
        int num = input;
        
        int xif = 0;
        
        while (num != 0){
            num = num/i;
            ++xif;
        }
        
        cout << "Base " << i << ": " << xif << " cifras." <<endl;
        
    }
    
    return 0;
}
