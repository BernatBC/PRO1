#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin >> num;
    
    if(num == 0){
        cout << 0;
    }
    
    while(num > 0){
        
        int hex = num%16;
        if(hex < 10){
            cout << hex;
        }else{
            
            if(hex == 10){
                cout << "A";
            }
            
            if(hex == 11){
                cout << "B";
            }
            
            if(hex == 12){
                cout << "C";
            }
            
            if(hex == 13){
                cout << "D";
            }
            
            if(hex == 14){
                cout << "E";
            }
            
            if(hex == 15){
                cout << "F";
            }
        }
        num = num/16;
    }
    
    cout << endl;
    
    return 0;
}
