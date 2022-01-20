#include <iostream>
using namespace std;

int main(){
    
    char lletra;
    bool hola = false;
    int lloc = 1;
    
    while (not hola and cin >> lletra and lletra != '.'){
        
        if(lletra == 'h'){
            lloc = 2;
        }else if(lloc == 2 and lletra == 'o'){
            ++lloc;
        }else if(lloc == 3 and lletra == 'l'){
            ++lloc;
        }else if(lloc == 4 and lletra == 'a'){
            hola = true;
            cout << "hola" <<endl;
        }else{
            lloc = 1;
        }
        
    }
        if(not hola){
            cout << "adeu" <<endl;
        }
}
