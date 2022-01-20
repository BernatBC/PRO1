#include <iostream>
using namespace std;

int main(){
    
    int h, m, s;
    cin >> h >> m >> s;
    
    s = s + 1;
    
    if(s == 60){
        s = 0;
        m++;
    }
    if(m == 60){
        m = 0;
        h++;
    }
    if(h == 24){
        h = 0;
    }
    
    if(h < 10){
        if(h == 0){
            cout << "00:";
        }else{
            cout << "0" << h << ":"; 
        }
    }else{
        cout << h << ":";
    }
    
    if(m < 10){
        if(m == 0){
            cout << "00:";
        }else{
            cout << "0" << m << ":"; 
        }
    }else{
        cout << m << ":";
    }
    
    if(s < 10){
        if(s == 0){
            cout << "00" <<endl;
        }else{
            cout << "0" << s <<endl; 
        }
    }else{
        cout << s <<endl;
    }
    
    return 0;
}
