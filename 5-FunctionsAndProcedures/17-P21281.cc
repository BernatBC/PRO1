#include <iostream>
using namespace std;


void factor(int n, int& f, int& q) {
	int d = 2; //conté la variable que farà de divisor. Comencem en el 2
	q = 0;
	//només hem d'arribar a l'arrel quadrada del número n
	while (d*d <= n) {
		int x = 0;
		while (n%d == 0) { //el número és divisible entre "d"
			++x; //incrementem el número de factors
			n /= d;
			if (x > q) { //si el número de factors supera a l'anterior
				q = x;
				f = d;
			}
		}
		++d;
	}
	// si q val 0 vol dir que és primer
	if (q == 0) {
		f = n;
		q = 1;
	}

}


int main() {
  int n;
  while (cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
  }
}
