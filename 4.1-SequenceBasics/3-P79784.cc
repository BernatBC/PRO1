#include <iostream>
using namespace std;

int main(){
    
    char direction;
    int estoest = 0;
    int nordsud = 0;
    
    while (cin >> direction){
        
        if(direction == 'n'){
            --nordsud;
        }
        if(direction == 's'){
            ++nordsud;
        }
        if(direction == 'e'){
            ++estoest;
        }
        if(direction == 'o'){
            --estoest;
        }
        
    }
    
    cout << "(" << estoest << ", " << nordsud << ")" <<endl;
    
    return 0;
}
