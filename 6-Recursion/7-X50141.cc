#include <iostream>
using namespace std;

int engreixa(int x);

int main() {
  int x;
  while (cin >> x) cout << engreixa(x) << endl;
}

int engreixa(int x) {
    
    //Parar la recursivitat quan el nombre sigui d'un sol digit
    if (x < 10) {
        return x;
    }
    
    //Establir nombre a engreixar i el maxim
    int num = engreixa(x/10);
    int num_engreixar = num%10;
    int max = x%10;
    
    //Comprovar si s'ha d'engreixar el numero
    if (num_engreixar > max) {
        return num*10 + num_engreixar;
    }
    else {
        return num*10 + max;
    }
}
