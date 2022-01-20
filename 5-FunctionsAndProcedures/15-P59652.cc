#include <iostream>
using namespace std;


void read_rational(int& num, int& den);


int main() {
  int t;
  cin >> t;
  while (t--) {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
  }
}

void read_rational(int& num, int& den){
    
    int a, b;
    char c;
    
    cin >> a >> c >> b;
    
    num = a;
    den = b;
    
    while (b != 0) {
        
        int r = a%b;
        a = b;
        b = r;
        
    }

    num = num/a;
    den = den/a;
    
}
