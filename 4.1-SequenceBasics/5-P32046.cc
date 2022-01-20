#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int contador = 0;
    int xifres = n%1000;
    
    cout << "nombres que acaben igual que " << n << ":" <<endl;
    
    while (cin >> n){
        
        if(n%1000 == xifres){
            cout << n <<endl;
            ++contador;
        }
        
    }
    
    cout << "total: " << contador <<endl;
    
    return 0;
}
