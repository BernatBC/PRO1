#include <iostream>
using namespace std;

int main(){
    
    int num1, num2, num3, num4, num5, num6;
    char a, b, c;
    cin >> num4 >> num5 >> num6;
    cin >> a >> b >> c;
    
    if(num4 < num5){
        num1 = num4;
        num2 = num5;
    } else {
        num1 = num5;
        num2 = num4;
    }
    
    if(num6 < num1){
        num3 = num2;
        num2 = num1;
        num1 = num6;
    }else if (num6 < num2){
        num3 = num2;
        num2 = num6;
    }else{
        num3 = num6;
    }
    
    if(a == 'A'){
        cout << num1 << " ";
    }
    
    if(a == 'B'){
        cout << num2 << " ";
    }
    
    if(a == 'C'){
        cout << num3 << " ";
    }
    
    if(b == 'A'){
        cout << num1 << " ";
    }
    
    if(b == 'B'){
        cout << num2 << " ";
    }
    
    if(b == 'C'){
        cout << num3 << " ";
    }
    
    if(c == 'A'){
        cout << num1 <<endl;
    }
    
    if(c == 'B'){
        cout << num2 <<endl;
    }
    
    if(c == 'C'){
        cout << num3 <<endl;
    }
    
}
