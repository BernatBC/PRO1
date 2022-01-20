#include <iostream>
using namespace std;

int main(){
    
    char guanyador = '=';
    int n, num, mig1, mig2, cont;
    bool tornb = true;
    
    cin >> n;
    
    cont = 1;
            cin >> num;
        
            mig1 = num;
            
            //Buscar llargada del número
            while (num/10 != 0){
                ++cont;
                num /= 10;
            }
            
            //Trobar valor central
            for(int j = 0; j < (cont - 1)/2; ++j){
                mig1 /= 10;
            }
            
            for(int k = 0; k < (cont - 1)/2; ++k){
                mig1 %= 10;
            }
            
            if (cont%2 != 1){
                guanyador = 'B';
            }
            
            mig2 = mig1;
            
    for(int i = 0; i < 2*n - 1; ++i){
        
        if(guanyador == '='){
        
            cont = 1;
            cin >> num;
        
            mig1 = num;
            
            //Buscar llargada del número
            while (num/10 != 0){
                ++cont;
                num /= 10;
            }
            
            //Trobar valor central
            for(int j = 0; j < (cont - 1)/2; ++j){
                mig1 /= 10;
            }
            
            for(int k = 0; k < (cont - 1)/2; ++k){
                mig1 %= 10;
            }
            
            //Verificar si hi ha gunyador
            if(mig1 != mig2 or cont%2 != 1){
                if(tornb){
                    guanyador = 'A';
                } else{
                    guanyador = 'B';
                }
            }   
            
            //Canviar de torn
            if(tornb){
                    tornb = false;
                } else{
                    tornb = true;
                }
        }
        mig2 = mig1;
    }
    
    cout << guanyador <<endl;
}
