#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comprova_anagrama(vector<char>& v1, vector<char>& v2);
bool ord(const char&a, const char&b);

int main() {
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        
        vector<char> v1;
        vector<char> v2;
        
        char next;
        
        while (cin >> next and next != '.') {
            
            if (next >= 'A' and next <= 'Z') {
                v1.push_back(next);
            }
            
        }
        
        while (cin >> next and next != '.') {
            
            if (next >= 'A' and next <= 'Z') {
                v2.push_back(next);
            }
            
        }
        
        bool es_anagrama = comprova_anagrama(v1, v2);
        
        if (es_anagrama) {
            cout << "SI" <<endl;
        }
        else {
            cout << "NO" <<endl;
        }
        
    }
    
}

bool comprova_anagrama(vector<char>& v1, vector<char>& v2) {
    
    int llarg1 = v1.size();
    int llarg2 = v2.size();
    
    if (llarg1 != llarg2) {
        return false;
    }
    
    sort(v1.begin(), v1.end(), ord);
    sort(v2.begin(), v2.end(), ord);
    
    bool be = true;
    
    int i = 0;
    
    while (be and i < llarg1) {
        
        if (v1[i] != v2[i]) {
            return false;
        }
        
        ++i;
    }
    return true;
}

bool ord(const char&a, const char&b) {
    
    if (a < b) {
        return true;
    }
    else {
        return false;
    }
    
}
