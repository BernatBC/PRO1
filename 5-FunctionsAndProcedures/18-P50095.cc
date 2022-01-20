#include <iostream>
using namespace std;

void seguent_primer(int& n);
bool comprova_primer(int num);

int main(){
    
    int n;
    
    while(cin >> n and n != 1 and n != 0 and comprova_primer(n)){
    
        seguent_primer(n);
        
        cout << n <<endl;
    
    }
    
}

void seguent_primer(int& n){
    
    bool es_primer = false;
    
    while(not es_primer){
        
        ++n;
        
        es_primer = comprova_primer(n);
        
    }
    
}

bool comprova_primer(int num){
    
    bool demoment_si = true;
        
        int i = 2;
        
        while(demoment_si and i*i <= num){
            
            if(num%i == 0){
                
                demoment_si = false;
                
            }
            
            ++i;
            
        }
    if(demoment_si){
            
            return true;
            
        }else{
            
            return false;
            
        }
}
