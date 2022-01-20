#include <iostream>
using namespace std;

int main(){
    
    char p1, p2;
    cin >> p1 >> p2;
    
    if(p1 == p2){
        cout << "-" <<endl;
    }else{
    
    if((p1 == 'A' and p2 == 'P') or (p1 == 'P' and p2 == 'V') or (p1 == 'V' and p2 == 'A')){
        cout << 1 <<endl;
    }else{
        cout << 2 <<endl;
    }
    }
    
    return 0;
}
