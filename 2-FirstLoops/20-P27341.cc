#include <iostream>
using namespace std;

int main(){
    
    int a, b;
    
    while(cin >> a >> b){

    int suma = 0;
    
    for (int i = a; i <= b; ++i){
        suma = suma + i*i*i;
    }
    
    cout << "suma dels cubs entre " << a << " i " << b << ": " << suma <<endl;
    }
    
    return 0;
}
