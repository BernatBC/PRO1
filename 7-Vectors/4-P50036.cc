#include <iostream>
#include <vector>
using namespace std;


int avalua(const vector<int>& P, int x);


int main()
{
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i=0; i<n; ++i) cin >> P[i];
        int x;  cin >> x;
        cout << avalua(P,x) << endl;
    }
}

int avalua(const vector<int>& P, int x) {
    
    int total = 0;
    int grau = P.size() - 1;
    int x_b = x;
    
    for (int i = 0; i <= grau; ++i) {
        
        if (i == 0) {
            
            total = P[0];
            
        }
        else {
            
            total += x_b*P[i];
            x_b = x_b*x;
            
        }
    }
    
    return total;
}
