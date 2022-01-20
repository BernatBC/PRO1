#include <iostream>
using namespace std;

void infoSequencia(int& max, int& lpos);

int cont = 0;
int input;

int main(){
    
    int max = 0;
    int lpos = 0;
    
    infoSequencia(max, lpos);
    
    cout << max << " " << lpos << " ";
    
    cont = 0;
    lpos = 0;
    
    while(lpos == 0 and cin >> input and input != 0){
        
        ++cont;
        
        if(input == max){
            
            lpos = cont;
            
        }
        
    }
    
    if(lpos == 0){
        
        cout << "-" <<endl;
        
    }else{
        
        cout << lpos <<endl;
        
    }
    
}

void infoSequencia(int& max, int& lpos){
    
    while(cin >> input and input != 0){
        
        ++cont;
        
        if(input >= max){
            
            max = input;
            lpos = cont;
            
        }
        
    }
    
}
