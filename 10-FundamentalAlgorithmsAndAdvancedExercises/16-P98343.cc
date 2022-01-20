#include <iostream>
#include <vector>
#include <string>
using namespace std;

void escriu(string num);
void escriu_centena(char a);
void escriu_miler(string num);
string unitat(char a);
string desena(char a, char b);
string desena_b(char b);

int main() {
    
    string num;
    
    while (cin >> num) {
        
        cout << num << ":";
        escriu(num);
        
    }
    
}

void escriu(string num) {
    
    bool inici = false;
    
    //Posar 0s a davant del nombre per tenir tots els numeros de la mateixa llargada
    string nombre = "0000000000";
    
    for (int i = 0; i < num.size(); ++i) {
        
        nombre[9 - i] = num[num.size() - i - 1];
        
    }
    
    //Agafar xifres de milions
    string milions;
    milions.push_back(nombre[0]);
    milions.push_back(nombre[1]);
    milions.push_back(nombre[2]);
    milions.push_back(nombre[3]);
    
    //Escriure milions
    if (milions != "0000") {
        
        if (milions[0] == '1') {
            
            inici = true;
            
            milions[0] = '0';
            cout << " mil";
            
        }
        
        if (not inici and milions == "0001") {
            
            cout << " un milio";
            
        }
        else {
            
            escriu_miler(milions);
            cout << " milions";
            
        }
        inici = true;
    }
    
    //Agafar xifres milers
    string centenes_miler;
    centenes_miler.push_back('0');
    centenes_miler.push_back(nombre[4]);
    centenes_miler.push_back(nombre[5]);
    centenes_miler.push_back(nombre[6]);
    
    //Escriure xifres milers
    if (centenes_miler != "0000") {
        
        if (centenes_miler == "0001") {
            
            cout << " mil";
            
        }
        else {
            
            escriu_miler(centenes_miler);
            cout << " mil";
            
        }
        inici = true;
    }
    
    //Agafar centenes
    string centenes;
    centenes.push_back('0');
    centenes.push_back(nombre[7]);
    centenes.push_back(nombre[8]);
    centenes.push_back(nombre[9]);
    
    //Escriure centenes
    if (centenes != "0000") {
        
        inici = true;
        
        escriu_miler(centenes);
        
    }
    
    //Escriure 0
    if (not inici) {
        cout << " zero";
    }
    
    cout << "." <<endl;
}

void escriu_miler(string num) {
    
    if (num[0] != '0') {
        
        cout << " " << unitat(num[0]) << " mil";
        
    }
    
    if (num[1] != '0') {
        
        escriu_centena(num[1]);
        
    }
    
    if (num[2] != '0') {
        
        cout << " " << desena(num[2], num[3]);
        
    }
    
    if (num[2] != '1' and num[3] != '0') {
        
        if (num[2] != '0') {
            
            cout << "-"; 
            
            if (num[2] == '2') {
                cout << "i-";
            }
            
            cout << unitat(num[3]);
            
        }
        else {
            cout << " " << unitat(num[3]);
        }
    }
    
}

void escriu_centena(char a) {
    
    if (a == '1') {
        
        cout << " cent";
        
    }
    else if (a != '0') {
        cout << " " << unitat(a) << "-cents";
    }   
}

string unitat(char a) {
    
    if (a == '1') {
        return "un";
    }
    else if (a == '2') {
        return "dos";
    }
    else if (a == '3') {
        return "tres";
    }
    else if (a == '4') {
        return "quatre";
    }
    else if (a == '5') {
        return "cinc";
    }
    else if (a == '6') {
        return "sis";
    }
    else if (a == '7') {
        return "set";
    }
    else if (a == '8') {
        return "vuit";
    }
    else if (a == '9') {
        return "nou";
    }
    else {
        return "";
    }
}

string desena(char a, char b) {
    
    if (a == '1') {
        return desena_b(b);
    }
    else if (a == '2') {
        return "vint";
    }
    else if (a == '3') {
        return "trenta";
    }
    else if (a == '4') {
        return "quaranta";
    }
    else if (a == '5') {
        return "cinquanta";
    }
    else if (a == '6') {
        return "seixanta";
    }
    else if (a == '7') {
        return "setanta";
    }
    else if (a == '8') {
        return "vuitanta";
    }
    else if (a == '9') {
        return "noranta";
    }
    else {
        return "";
    }
}

string desena_b(char b) {
    
    if (b == '0'){
        return "deu";
    }
    else if (b == '1') {
        return "onze";
    }
    else if (b == '2') {
        return "dotze";
    }
    else if (b == '3') {
        return "tretze";
    }
    else if (b == '4') {
        return "catorze";
    }
    else if (b == '5') {
        return "quinze";
    }
    else if (b == '6') {
        return "setze";
    }
    else if (b == '7') {
        return "disset";
    }
    else if (b == '8') {
        return "divuit";
    }
    else if (b == '9') {
        return "dinou";
    }
    else {
        return "";
    }
    
}
