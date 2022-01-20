#include <iostream>
#include <string>
using namespace std;

void escriu_linia(char c, string s, bool b);

int main(){
    
    char input;
    bool b_lletra= false;
    bool b_maj = false;
    bool b_min = false;
    bool b_digit = false;
    bool b_vocal = false;
    bool b_consonant = false;
    cin >> input;
    
    if(input >= 'A' and input <= 'Z'){
        
        b_maj = true;
        
    }else if(input >= 'a' and input <= 'z'){
        
        b_min = true;
        
    }else if(input >= '0' and input <= '9'){
        
        b_digit = true;
        
    }
    
    if(b_maj or b_min){
        
        b_lletra = true;
        
    }
    
    if(b_lletra and (input == 'a' or input == 'e' or input == 'i' or input == 'o' or input == 'u' or input == 'A' or input == 'E' or input == 'I' or input == 'O' or input == 'U' )){
        
        b_vocal = true;
        
    }
    
    if(b_lletra and !b_vocal){
        
        b_consonant = true;
        
    }
    
    escriu_linia(input, "lletra", b_lletra);
    escriu_linia(input, "vocal", b_vocal);
    escriu_linia(input, "consonant", b_consonant);
    escriu_linia(input, "majuscula", b_maj);
    escriu_linia(input, "minuscula", b_min);
    escriu_linia(input, "digit", b_digit);
}

void escriu_linia(char c, string s, bool b){
    
    cout << s << "('" << c << "') = ";
    
    if(b){
        cout << "cert" <<endl; 
    }else{
        cout << "fals" <<endl;
    }
    
}
