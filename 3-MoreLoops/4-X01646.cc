#include <iostream>
using namespace std;

int main(){
    
    int b, num;
    
    cin >> b;
    
    while (cin >> num){
        
        int a = num;
        int r = 0;
        
        while (a != 0){
            
            r = r + a%b;
            a = a/b;
            
        }
        
        cout << num << ": " << r <<endl;
        
    }
    
    return 0;
}
