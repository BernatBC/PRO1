#include <iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(10);
    
    int n, m;
    
    while (cin >> n >> m){
    
    double total = 0.0;

    //Càlcul Hn i Hm
    for (int i = m + 1; i <= n; ++i){
        total += 1.0/i;
    }
    
    cout << total <<endl;
    }
    
    return 0;
}
