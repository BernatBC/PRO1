#include <iostream>
using namespace std;

int main(){
    
    int anys, dies, hores, min, seg;
    cin >> anys >> dies >> hores >> min >> seg;
    int seg_tot = seg + min * 60 + hores * 3600 + 3600 * 24 * dies + 3600 * 24 * 365 * anys;
    cout << seg_tot <<endl;
    
    return 0;
}
