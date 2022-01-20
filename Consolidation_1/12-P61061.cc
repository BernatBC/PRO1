#include <iostream>
using namespace std;

int main(){
    
    int num1;
    
    while (cin >> num1){
        
        if(num1%10 == num1){
            cout << "El producte dels digits de " << num1 << " es " << num1 << "." <<endl;
        }else{
        
            while (num1 != 0 and num1%10 != num1){
                
                int aux = num1;
                int num2 = num1;
                num1 = 1;
                
                while (num2 != 0){
                    
                    num1 *= num2%10;
                    num2 /= 10;
                    
                }
                
                cout << "El producte dels digits de " << aux << " es " << num1 << "." <<endl;
            }
        }
            cout << "----------" <<endl;
    }
    
}
