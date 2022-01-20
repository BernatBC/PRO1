#include <iostream>
#include <vector>
using namespace std;


vector<double> diferencia(const vector<double> & V1, const vector<double> & V2);


int main() {
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(4);
  
  int n1;
  while (cin >> n1) {
    vector<double> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<double> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];

    vector<double> res = diferencia(V1, V2);

    int n3 = res.size();
    cout << n3 << endl;
    for (int i = 0; i < n3; ++i) cout << " " << res[i];
    cout << endl << endl;

    for (int r = 0; r < 200; ++r) {
      vector<double> res2 = diferencia(V1, V2);
      if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
    }
  }
}

vector<double> diferencia(const vector<double> & V1, const vector<double> & V2) {
    
    int llargada_v1 = V1.size();
    int llargada_v2 = V2.size();
    
    int i = 0;
    int j = 0;
    bool first = true;
    vector<double> taula;
    
    while (i < llargada_v1 and j < llargada_v2) {
        
        if (V1[i] < V2[j]) {
            
            if (first or V1[i] != V1[i - 1]) {
                
                first = false;
                taula.push_back(V1[i]);
                
            }
            ++i;
        }
        else if (V1[i] > V2[j]) {
            
            ++j;
            
        }
        else {
            
            ++i;
            
        }
        
    }

    while (i < llargada_v1) {
        
        if (taula.size() == 0 or V1[i] != V1[i - 1]) {
            
            taula.push_back(V1[i]);
            
        }
        ++i;
    }
    
    return taula;
}
