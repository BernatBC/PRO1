#include <iostream>
using namespace std;

int main(){
    
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    
     if (a1 == a2 and b1 == b2){
        cout << "= , ";
    } else if(a1 >= a2 and b1 <= b2){
        cout << "1 , ";
    } else if(a1 <= a2 and b1 >= b2){
        cout << "2 , ";
    } else{
        cout << "? , ";   
    }
    
    if(a1>b2 or a2>b1){
    
        cout << "[]" <<endl;
    }else{
     
        if(a1<a2){
            
            a1 = a2;
    }
    
    if(b1>b2){
            b1 = b2;
    }
    cout << "[" << a1 << "," << b1 << "]" <<endl;
    }
    
    return 0;}
