#include <iostream>
using namespace std;

int main(){
    
    int elements, max;
    while (cin >> elements){
    
        cin >> max;
        
        for(int i = 0; i < elements - 1; ++i){
            
            int num;
            cin >> num;
            
            if(num > max){
                max = num;
            }
            
        }
    cout << max <<endl;
}}
