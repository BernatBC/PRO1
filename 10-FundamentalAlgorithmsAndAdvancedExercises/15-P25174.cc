#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<vector<int> > > MatriuCubica;

int ratlles_totals(const MatriuCubica& cub, int n);
int pos_ratlles(const MatriuCubica& cub, int n, int x, int y, int z);

int main() {
    
    int n;
    bool first = true;
    
    while (cin >> n) {
        
        MatriuCubica cub(n, vector<vector<int> >(n, vector<int>(n)));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    cin >> cub[i][j][k];
                }
            }
        }
        
        if (first) {
            first = false;
        }
        else {
            cout <<endl;
        }
        
        for (int i = 2; i <= n; ++i) {
            
            cout << "Ratlles de mida " << i << ": ";
            cout << ratlles_totals(cub, i) <<endl;
            
        }
    }
    
}

int ratlles_totals(const MatriuCubica& cub, int n) {
    
    int nombre = 0;
    int mida = cub.size();
    
    for (int i = 0; i < mida; ++i) {
        
        for (int j = 0; j < mida; ++j) {
            
            for (int k = 0; k < mida; ++k) {
                
                nombre += pos_ratlles(cub, n, i, j, k);
                
            }
        }
    }
    return nombre;
}

int pos_ratlles(const MatriuCubica& cub, int n, int x, int y, int z) {
    
    int num = cub[x][y][z];
    int mida = cub.size();
    int ratlles = 0;
    
    //++x
    bool iguals = true;
    int i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or num != cub[x + i][y][z]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++y
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (y + i >= mida or num != cub[x][y + i][z]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (z + i >= mida or num != cub[x][y][z + i]) {
            iguals = false;
        }
        
        ++i;
    }
    
    if (iguals) {
        ++ratlles;
    }
    
    //++x,++y
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or y + i >= mida or num != cub[x + i][y + i][z]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++x,++z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or z + i >= mida or num != cub[x + i][y][z + i]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++y,++z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (y + i >= mida or z + i >= mida or num != cub[x][y + i][z + i]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++x,--y
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or y - i < 0 or num != cub[x + i][y - i][z]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++x,--z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or z - i < 0 or num != cub[x + i][y][z - i]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++y,--z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (y + i >= mida or z - i < 0 or num != cub[x][y + i][z - i]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++x,++y,++z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or y + i >= mida or z + i >= mida or num != cub[x + i][y + i][z + i]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++x,++y,--z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or y + i >= mida or z - i < 0 or num != cub[x + i][y + i][z - i]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++x,--y,++z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or y - i < 0 or z + i >= mida or num != cub[x + i][y - i][z + i]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    //++x,--y,--z
    iguals = true;
    i = 0;
    while (iguals and i < n) {
        
        if (x + i >= mida or y - i < 0 or z - i < 0 or num != cub[x + i][y - i][z - i]) {
            iguals = false;
        }
        
        ++i;
    }
    if (iguals) {
        ++ratlles;
    }
    
    return ratlles;
}
