#include <iostream>
using namespace std;

int main(){
    
    int num1;
    int num2 = 0;
    int contador = 0;

    cin >> num1;
    
    int aux = num1;    

    //determinar longitud del número
    while (aux != 0){
        
        num2 = num2*10 + num1%10;
        aux /= 10;
        ++contador;
        
    }
    
    if(contador%2 == 0 and contador != 0){
        //en el cas que tingui xifres parells, separar el número en dues meitats
        num2 = 0;        

        for (int i = 0; i < contador/2; ++i){
            num2 = num2*10 + num1%10;
            num1 /= 10;
        }
        
        //fer la suma dels dos blocs
        int suma1 = 0;
        int suma2 = 0;
        
        while (num1 != 0){
            
            suma1 += num1%10;
            num1 /= 10;
            
        }
        
        while (num2 != 0){
            
            suma2 += num2%10;
            num2 /= 10;
            
        }
        
        //comparar sumes
        
        if(suma1 < suma2){
            
            cout << suma1 << " < " << suma2 <<endl;
            
        }else if(suma1 > suma2){
            
            cout << suma1 << " > " << suma2 <<endl;
            
        }else{
            
            cout << suma1 << " = " << suma2 <<endl;
            
        }
        
    }else{
        cout << "res" <<endl;
    }
}
