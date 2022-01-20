#include <iostream>
using namespace std;

struct Rectangle {
    int x_esq, x_dre, y_baix, y_dalt;
};

void llegeix(Rectangle& r);
int relacio(const Rectangle& r1, const Rectangle r2);

int main() {
    
    int num;
    cin >> num;
    
    Rectangle r1, r2;
    
    for (int i = 0; i < num; ++i) {
        
        llegeix(r1);
        llegeix(r2);
        
        int r = relacio(r1, r2);
        
        if (r == 0) {
            cout << "els rectangles no intersecten" <<endl;
        }
        else if (r == 1) {
            cout << "el primer rectangle es interior al segon" <<endl;
        }
        else if (r == 2) {
            cout << "el segon rectangle es interior al primer" <<endl;
        }
        else if (r == 3) {
            cout << "els rectangles intersecten" <<endl;
        }
        else {
            cout << "els rectangles son iguals" <<endl;
        }
        
        
    }
    
}

void llegeix(Rectangle& r) {
    
    cin >> r.x_esq >> r.x_dre >> r.y_baix >> r.y_dalt;
    
}

int relacio(const Rectangle& r1, const Rectangle r2) {
    
    int a;
    
    if (r1.x_esq == r2.x_esq and r1.x_dre == r2.x_dre and r1.y_baix == r2.y_baix and r1.y_dalt == r2.y_dalt) {
        a = 4;
    }
    else if (r1.x_esq >= r2.x_esq and r1.x_dre <= r2.x_dre and r1.y_baix >= r2.y_baix and r1.y_dalt <= r2.y_dalt) {
        a = 1;
    }
    else if (r1.x_esq <= r2.x_esq and r1.x_dre >= r2.x_dre and r1.y_baix <= r2.y_baix and r1.y_dalt >= r2.y_dalt) {
        a = 2;
    }
    else if (r1.x_esq > r2.x_dre or r2.x_esq > r1.x_dre or r1.y_dalt < r2.y_baix or r2.y_dalt < r1.y_baix) {
        a = 0;
    }
    else {
        a = 3;
    }
    
    return a;
}
