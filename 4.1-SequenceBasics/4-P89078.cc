#include <iostream>
using namespace std;

int main(){
    
    int num = 1;
    int contador = 0;

    while (num%2 != 0 and cin >> num){
        
        ++contador;
    }
    
    cout << contador <<endl;
    
    return 0;
}
