#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin >> num;
    
    int i = 1;
    int r = 0;
    
    while (i <= num){
        
        r = r + i * i;
        i++;
        
    }
    
    cout << r <<endl;
    
    return 0;
}
