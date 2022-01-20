#include <iostream>
using namespace std;


int reduccio_digits(int n);


int main() {
  int n;
  while (cin >> n) {
    cout << reduccio_digits(n) << endl;
  }
}

int reduccio_digits(int n){
    
    if(n < 10){
        
        return n;
        
    }
    
    return reduccio_digits(n%10 + n/10);
    
}
