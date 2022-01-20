#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin >> num;
    
    int n = num;
    
    int suma = 0;
    
    while (n > 0){
        suma = suma + n%100;
        n = n/100;
    }
    
    cout << num;
    
    if(suma%2 != 0){
        cout << " NO";
    }
    
    cout << " ES TXATXI" <<endl;
    
    return 0;
}
