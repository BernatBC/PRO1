#include <iostream>
using namespace std;


int sum_min_max(int x,int y,int z);


int main() {
  int x,y,z;
  while (cin >> x >> y >> z) cout << sum_min_max(x,y,z) << endl;
}

int sum_min_max(int x, int y, int z){
    
    int max = x;
    int min = x;
    
    if(y > max){
        
        max = y;
        
    }else if(y < min){
        
        min = y;
        
    }
    
    if(z > max){
        
        max = z;
        
    }else if(z < min){
        
        min = z;
        
    }
    
    int suma = min + max;
    
    return suma;
    
}
