#include <typeinfo>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Punt {
         double x, y;
     };

struct Cercle {
         Punt centre;
         double radi;
     };

double distancia(const Punt& a, const Punt& b);
void desplaca(Punt& p1, const Punt& p2);
void escala(Cercle& c, double esc);
void desplaca(Cercle& c, const Punt& p);
bool es_interior(const Punt& p, const Cercle& c);

int main() {
          
  cout.setf(ios::fixed);
  cout.precision(4);

  string s;
  double x1, y1, radi, esc, x2, y2, x3, y3;
  while (cin >> s >> x1 >> y1 >> radi >> s >> s >> esc
             >> s >> x2 >> y2 >> s >> x3 >> y3) {
      Cercle c;
      c.centre.x = x1;
      c.centre.y = y1;
      c.radi = radi;
      escala(c, esc);
      cout << c.centre.x << " " << c.centre.y << " " << c.radi << endl;

      c.centre.x = x1;
      c.centre.y = y1;
      c.radi = radi;
      Punt p;
      p.x = x2;
      p.y = y2;
      desplaca(c, p);
      cout << c.centre.x << " " << c.centre.y << " " << c.radi << endl;

      c.centre.x = x1;
      c.centre.y = y1;
      c.radi = radi;
      Punt q;
      q.x = x3;
      q.y = y3;
      cout << es_interior(q, c) << endl;

      desplaca(q, p);
      cout << q.x << " " << q.y << endl;
      cout << endl;
  }
}

double distancia(const Punt& a, const Punt& b) {
    
    double disx = a.x - b.x;
    double disy = a.y - b.y;
    
    if (disx < 0) {
        disx = -disx;
    }
    
    if (disy < 0) {
        disy = -disy;
    }
    
    double dis = sqrt(disx*disx + disy*disy);
    
    return dis;
}

void desplaca(Punt& p1, const Punt& p2) {
    
    p1.x = p1.x + p2.x;
    p1.y = p1.y + p2.y;
    
}

void escala(Cercle& c, double esc) {
    
    c.radi = c.radi*esc;
    
}

void desplaca(Cercle& c, const Punt& p) {
    c.centre.x = c.centre.x + p.x;
    c.centre.y = c.centre.y + p.y;
}

bool es_interior(const Punt& p, const Cercle& c) {
    
    if (distancia(p, c.centre) < c.radi) {
        return true;
    }
    else {
        return false;
    }
    
}
