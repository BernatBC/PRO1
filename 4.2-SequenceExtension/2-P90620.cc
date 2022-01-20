#include <iostream>
using namespace std;

int main(){
    
int pica = 0;
int picb = 0;
int picc = 0;
bool major = false;
   
cin >> picc >> picb;

    while (cin >> pica and pica != 0){
        
        if(picb > pica and picb > picc and picb > 3143){
            
            major = true;
            
        }
        
        picc = picb;
        picb = pica;
        
    }
    
    if(major){
        cout << "SI" <<endl;
    }else{
        cout << "NO" <<endl;
    }
    
}
