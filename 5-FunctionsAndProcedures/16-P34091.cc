#include <iostream>
using namespace std;

bool es_perfecte(int x);

int main () {
  int x;
  while (cin >> x) cout << (es_perfecte(x) ? "true" : "false") << endl;
}

bool es_perfecte(int x){
    
    int num = x;
    int suma = -num;
    int n = 1;
    
    while(n*n <= num){
        
        if(num%n == 0){
            
            suma += n;
            suma += num/n;
            
        }
        
        ++n;
        
    }
    
    if(suma == num and num != 0 and num != 1){
        
        return true;
        
    }else{
        
        return false;
        
    }
    
}
