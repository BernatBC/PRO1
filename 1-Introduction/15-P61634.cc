#include <iostream>
using namespace std;

int main(){
    
    int any;
    cin >> any;

    if(any%4 == 0){
        if(any%100 == 0){
            any = any / 100;
            if(any%4 == 0){
                cout << "YES" <<endl;
            }else{
                cout << "NO" <<endl;
            }
        }else{
            cout << "YES" <<endl;
        }
        
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}
