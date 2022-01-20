#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Tren {
    string id_tren;
    string destino;
    string hora;
};

struct InfDest {
    string destino;
    string primer_id;
    int freq;
};

vector<Tren> lee_info_trenes(int n) {
    
    vector<Tren> llista_trens(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> llista_trens[i].id_tren >> llista_trens[i].destino >> llista_trens[i].hora;
    }
    return llista_trens;
}

bool cmp_tren(const Tren& a, const Tren& b) {
    
    if (a.destino < b.destino) {
        return true;
    }
    else if (a.destino == b.destino) {
        if (a.hora < b.hora or (a.hora == b.hora and a.id_tren < b.id_tren)) {
            return true;
        }
    }
    return false;
}

bool cmp_inf_dest(const InfDest& a, const InfDest& b) {
    
    if (a.freq > b.freq or (a.freq == b.freq and a.destino < b.destino)) {
        return true;
    }
    return false;
}

//pre: m > 0  es el numero de destinos y v es el vector de trenes
//     con la info de cada <Tren>. El vector v no es vacio y esta 
//     ordenado por (1) criterio principal: destino
//     (2) criterio secundario: hora    (3) último criterio:
//     identificador de tren.
//     
//
//post: construye un vector de  <InfDest>  con la info recogida
//      de cada destino, su frecuencia y su primer tren
vector<InfDest> crea_v_inf_dest(const vector<Tren>& v, int m) {
    
    vector<InfDest> llista_des(m);
    int pos = 0;
    int num_tren = 1;
    int num_dest = 0;
    
    while (pos < v.size()) {
        if (pos == 0 or v[pos].destino != v[pos - 1].destino) {
            llista_des[num_dest].destino = v[pos].destino;
            llista_des[num_dest].primer_id = v[pos].id_tren;
            
            if (pos != 0) {
                llista_des[num_dest - 1].freq = num_tren;
            }
            num_tren = 1;
            ++num_dest;
        }
        else {
            ++num_tren;
        }
        
        ++pos;
    }
    llista_des[num_dest - 1].freq = num_tren;
    return llista_des;
}

void escribir_resultados(const vector<InfDest>& v_inf_dest) {
    
    for (int i = 0; i < v_inf_dest.size(); ++i) {
        cout << v_inf_dest[i].destino << " " << v_inf_dest[i].freq << " " << v_inf_dest[i].primer_id <<endl;
    }
}
      

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<Tren> v_tren = lee_info_trenes(n);
    sort(v_tren.begin(), v_tren.end(), cmp_tren);
    vector<InfDest> v_inf_dest = crea_v_inf_dest(v_tren, m);
    sort(v_inf_dest.begin(), v_inf_dest.end(), cmp_inf_dest);
    escribir_resultados(v_inf_dest);
}
