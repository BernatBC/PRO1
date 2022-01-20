#include <typeinfo>
#include <cmath>
#include <iostream>
using namespace std;

struct Punt {
         double x, y;
     };

double distancia(const Punt& a, const Punt& b);


int main() {

  cout.setf(ios::fixed);
  cout.precision(6);

  double x1, y1, x2, y2;
  while (cin >> x1 >> y1 >> x2 >> y2) {
    Punt a, b;
    a.x = x1;
    a.y = y1;
    b.x = x2;
    b.y = y2;
    cout << distancia(a, b) << endl;
  }
}

double distancia(const Punt& a, const Punt& b) {
    
     double disx, disy;
     
     if (a.x > b.x) {
         
         disx = a.x - b.x;
    }
    else {
        
        disx = b.x - a.x;
        
    }
    
    if (a.y > b.y) {
         
         disy = a.y - b.y;
    }
    else {
        
        disy = b.y - a.y;
        
    }
    
    double dis = sqrt(disx*disx + disy*disy);
    
    return dis;
    
}
