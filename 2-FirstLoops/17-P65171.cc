#include <iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int n;
    cin >> n;
    
    double a = 0.0;
    double b = 0.0;
    
    for (int i = 0; i < n; i++){
        
        double num;
        cin >> num;
        
        a = a + num*num;
        b = b + num;
        
    }
    
    double r = a/(n - 1) - (b*b)/(n*(n - 1));

    cout << r <<endl;
    
    return 0;
}
