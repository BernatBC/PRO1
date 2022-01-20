#include <iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a, b, k;
    
    while (cin >> a >> b >> k){
        
        double res = 0.0;
        int i = 0;
        
        while (a + i*k <= b){
            res += 1.0/(a + i*k);
            ++i;
        }
        
        cout << res <<endl;
        
    }
    
}
