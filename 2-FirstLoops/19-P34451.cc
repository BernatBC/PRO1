#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin >> num;
    
    int a;
    int cont = 0;
    
    while(cin >> a){
        if(a%num == 0){
            ++cont;
        }
    }
    
    cout << cont <<endl;
    
    return 0;
}
