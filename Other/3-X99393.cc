#include <iostream>
#include <vector>
using namespace std;

struct Asignatura {
    int id;
    double creditos;
    double nota;
};

struct Alumno {
    int dni;
    vector <Asignatura> asigs;
};

typedef vector <Alumno> Alumnos;

// Pre: --
// Post: retorna el número d'alumnes a alus que superen el factor alfa
int supera_alfa(const Alumnos& alus) {
    
    int comptador = 0;
    
    for (int i = 0; i < alus.size(); ++i) {
        
        double n_cred = 0.0;
        double mitjana_par = 0.0;
        
        for (int j = 0; j < alus[i].asigs.size(); ++j) {
            
            n_cred += alus[i].asigs[j].creditos;
            mitjana_par += alus[i].asigs[j].creditos*alus[i].asigs[j].nota;
            
        }
        
        mitjana_par = mitjana_par/n_cred;
        
        if (mitjana_par >= 5) {
            ++comptador;
        }
    }
    
    return comptador;
}

// Pre: a l'entrada hi ha informació de m assignatures
// Post: retorna un vector de Asignatura amb la informació de l'entrada,
//          mantenint l'ordre d'aparició
vector <Asignatura> lee_asignaturas(int m) {
    
    vector<Asignatura> assignatures(m);
    
    for (int i = 0; i < m; ++i) {
        cin >> assignatures[i].id >> assignatures[i].creditos >> assignatures[i].nota;
    }
    return assignatures;
}

int main() {
    int n;
    cin >> n;
    Alumnos a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].dni;
        int m;
        cin >> m;
        a[i].asigs = lee_asignaturas(m);
    }
    cout << supera_alfa(a) << endl;
}
