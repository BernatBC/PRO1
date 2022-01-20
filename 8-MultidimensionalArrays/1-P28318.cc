#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    
    vector<vector<int> > matriu(a, vector<int>(b));
    
    for (int i = 0; i < a; ++i) {
        
        for (int j = 0; j < b; ++j) {
            
            int num;
            cin >> num;
            matriu[i][j] = num;
            
        }
        
    }
    
    string instruct;
    
    while (cin >> instruct) {
        
        if (instruct == "fila") {
            int num;
            cin >> num;
            cout << "fila " << num << ":";
            
            for (int i = 0; i < matriu[0].size(); ++i) {
                cout << " " << matriu[num - 1][i];
            }
            cout <<endl;
        }
        else if (instruct == "columna") {
            int num;
            cin >> num;
            cout << "columna " << num << ":";
            
            for (int i = 0; i < matriu.size(); ++i) {
                cout << " " << matriu[i][num - 1];
            }
            cout <<endl;
        }
        else {
            
            int num1, num2;
            cin >> num1 >> num2;
            cout << "element " << num1 << " " << num2 << ": " << matriu[num1 - 1][num2 - 1] <<endl;
            
        }
        
    }
    
}
