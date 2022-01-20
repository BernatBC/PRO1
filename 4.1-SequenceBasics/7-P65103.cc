#include <iostream>
using namespace std;

int main(){
    
    int pos, num;
    
    cin >> pos;
    
    int i = 0;
    
    while (i < pos and cin >> num){
        
        ++i;
        
    }
    
    if (i == pos and i != 0){
        
        cout << "A la posicio " << pos << " hi ha un " << num << "." <<endl;
        
    } else{
        
        cout << "Posicio incorrecta." <<endl;
        
    }
    
    return 0;
}
