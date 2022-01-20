#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

bool comp(const Track &a, const Track &b) {
    
    if (a.artist < b.artist) {
        
        return true;
        
    }
    else if (a.artist == b.artist) {
        
        if (a.year < b.year) {
            
            return true;
        }
        else if (a.year == b.year) {
            
            if (a.title < b.title) {
                return true;
            }
            
        }
    }
    return false;
}
/*
vector<Track> read_tracks(int n) {
  // Add your code here ...
}*/

void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
  
    int n;
    cin >> n;
    
    vector<Track> media(n);
    
    for (int i = 0; i < n; ++i) {
        
        cin >> media[i].artist >> media[i].title >> media[i].genre >> media[i].year;
        
    }
    
    sort(media.begin(), media.end(), comp);
    
    string genere;
    
    while (cin >> genere) {
        
        for (int i = 0; i < n; ++i) {
        
            if (genere == media[i].genre) {
                
                Track t = media[i];
                print_track(t);
                
            }
            
        }
        
    }

}
