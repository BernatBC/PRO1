#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin >> num;
    
    int n = num;
    int pos = 1;
     
    while (n / 10 != 0){
         n = n /10;
         pos++;
    }
    
    cout << "El nombre de digits de " << num << " es " << pos << "." <<endl;
    
    return 0;
}
