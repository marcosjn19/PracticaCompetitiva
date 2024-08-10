#include <bits/stdc++.h> 
using namespace std;
vector<int> tamanoPiramides;
int crecimiento = 5;

void solve () {
    int tam; cin >> tam;
    int cont = 0;
    while ( tam > tamanoPiramides.back() ){
        tamanoPiramides.push_back(tamanoPiramides.back() + crecimiento);
        crecimiento+=3;
    } 

    while ( tam >= 2 ) {
        auto upper1 = std::upper_bound(tamanoPiramides.begin(), tamanoPiramides.end(), tam);
        int ind = upper1-tamanoPiramides.begin();
        if ( tam < *upper1 )
            ind--;
        tam -= tamanoPiramides[ind];
        cont++;
    }

    cout << cont << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
    tamanoPiramides.push_back(2);
    int cases; cin >> cases;
    while ( cases-- )
        solve();
}