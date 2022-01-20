#include <iostream>
using namespace std;

int main(){
    
    char letter = ' ';
    bool is_a = false;
    
    while (!is_a and letter != '.' and cin >> letter){
        
        if(letter == 'a'){
            is_a = true;
        }
        
    }
    
    if(is_a){
        cout << "si" <<endl;
    } else {
        cout << "no" <<endl;
    }
    
    return 0;
}
