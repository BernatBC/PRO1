#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v);
vector<int> maxims(const vector<int>& v);

int main() {
    
    int n;
    cin >> n;
    bool first_time = true;
    
    vector<int> serralada(n);
    
    for (int i = 0; i < n; ++i) {
        
        int input;
        cin >> input;
        
        serralada[i] = input;
        
    }
    
    vector<int> cims = calcula_cims(serralada);
    
    int n_cims = cims.size();
    cout << n_cims << ":";
    
    for (int i = 0; i < n_cims; ++i) {
        
        cout << " " << cims[i];
        
    }
    cout <<endl;
    
    if (n_cims == 0) {
        
        cout << "-"<<endl;
        
    }
    else {
        vector<int> max = maxims(cims);
        
        int n_max = max.size();
        
        if (n_max == 0) {
            
            cout << "-" <<endl;
            
        }
        else {
            for (int i = 0; i < n_max; ++i) {
                
                if (first_time) {
                    
                    first_time = false;
                    cout << max[i];
                    
                }
                else {
                    cout << " " << max[i];
                }
            }
            cout <<endl;
        }
    }
}

vector<int> calcula_cims(const vector<int>& v) {
    
    int llargada = v.size();
    vector<int> cims;
    
    for (int i = 1; i < llargada - 1; ++i) {
        
        if (v[i - 1] < v[i] and v[i] > v[i + 1]) {
            
            cims.push_back(v[i]);
            
        }
        
    }
    return cims;
}

vector<int> maxims(const vector<int>& v) {
    
    vector<int> max;
    
    int llargada = v.size();
    
    for (int i = 0; i < llargada - 1; ++i) {
        
        if (v[i] > v[llargada - 1]) {
            
            max.push_back(v[i]);
            
        }
    }
    
    return max;
}
