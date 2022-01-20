#include <iostream>
using namespace std;

int main(){
    
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        
        int m;
        double min, max, mitjana;
        cin >> m;
        cin >> min;
        
        max = min;
        mitjana = min;
        
        for(int j = 0; j < m - 1; ++j){
            
            double num;
            cin >> num;
            
            if(num < min){
                min = num;
            }else if(num > max){
                max = num;
            }
            
            mitjana += num;
        }
        
        mitjana /= m;
        
        cout << min << " " << max << " " << mitjana <<endl;
    }
    
}
