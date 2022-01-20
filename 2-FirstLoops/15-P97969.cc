#include <iostream>
using namespace std;

int main(){
    
    char letter;
    cin >> letter;
    
    int a = 0;
    
    while (letter != '.'){
        if(letter == 'a'){
            ++a;
        }
        cin >> letter;
    }
    
    cout << a <<endl;
    
    return 0;
}
