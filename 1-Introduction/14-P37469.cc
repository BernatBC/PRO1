#include <iostream>
using namespace std;

int main(){
    
    int seg;
    cin >> seg;
    int min = 0;
    int hores = 0;
    
    if(seg > 59){
        min = seg / 60;
        seg = seg - 60 * min;
    }
    
    if(min > 59){
        hores = min / 60;
        min = min - 60 * hores;
    }
    
    cout << hores << " " << min << " " << seg <<endl;
    
    return 0;
}
