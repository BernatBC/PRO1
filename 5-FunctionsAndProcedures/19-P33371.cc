#include <iostream>
using namespace std;

char codificat (char c, int k);

int main(){
    
    int num;
    char input;
    
    while(cin >> num){
        
        if(num > ('z' - 'a')){
        
            num = num%('z' - 'a' + 1);
            
        }
        
        while(cin >> input and input != '.'){
            
            cout << codificat(input, num);
            
        }
    
    cout <<endl;
}
}

char codificat(char c, int k){
    
    if(c >= 'a' and c <= 'z'){
        
        for(int i = 0; i < k; ++i){
            
            ++c;
            
            if(c == 'z' + 1){
                
                c = 'a';
                
            }
            
        }
        
        c = c + 'A' - 'a';
        
        return c;
        
    }else if(c == '_'){
        
        return ' ';
        
    }else{
        
        return c;
        
    }
    
}
