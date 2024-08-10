#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
typedef pair<int,int>pii;
struct Compare {
    bool operator()(const pii& a, const pii&b ){
        return a.second < b.second;
    }
};

void calcularAtaques(vector<pair<int,int>>&coords, priority_queue<pii, vector<pii>, Compare>&pq){
    int indice = 0;
    int aux = 0;
    for ( int j = 0; j < coords.size(); j++ ){
        for ( int i = 0; i < coords.size(); i++ ){
            int dist = abs(coords[i].first-coords[j].first) + abs(coords[i].second-coords[j].second);
            if ( i == j )
                continue;

            if ( coords[j].first == -1 ){
                break;
            }
            if ( coords[i].first == -1 ){
                continue;
            }

            if ( (coords[i].first-coords[j].first) == 0){
                continue;
            }

            if ( (coords[i].second-coords[j].second) == 0){
                continue;
            }

            if ( dist == 3 ){
                aux++;
            }
        }
        if ( aux ){
            //cout << coords[indice].first << "  " << coords[indice].second << "   " << aux << "   " << indice << endl;
            pq.push(make_pair(indice, aux));
        }
        indice++;
        aux = 0;
    }

}

void solve (int s, int n) {
    priority_queue<pii, vector<pii>, Compare>pq;
    vector<pair<int,int>> coords;
    while(n--){
        int x; cin>>x;
        int y; cin>>y;
        coords.push_back({x,y});
    }
    int aux = 0;
    calcularAtaques(coords,pq);
    while ( pq.size() > 0){
        aux++;
        coords[pq.top().first].first = -1;
        while ( !pq.empty() ){
            pq.pop();
        }
        calcularAtaques(coords,pq);
    }
    cout << aux << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    int s; cin>>s;
    int n; cin>>n;
    solve(s, n);
}