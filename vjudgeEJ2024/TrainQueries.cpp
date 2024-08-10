#include <bits/stdc++.h> 
using namespace std;

void solve () {
	int nE; cin >> nE;
	int nR; cin >> nR;
	map<int, pair<int,int>> estaciones;
	for ( int i = 0; i < nE; i++ ){
		int e; cin >> e;
		if ( estaciones.count(e) == 0 ){
			estaciones[e].first = i;
			estaciones[e].second = i;
		}else{
			estaciones[e].second = i;
		}
	}
	while ( nR-- ) {
		int v1; cin >> v1;
		int v2; cin >> v2;
		if ( estaciones.count(v1) == 0 || estaciones.count(v2) == 0 || estaciones[v1].first > estaciones[v2].second){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int cases; cin >> cases;
	while ( cases-- )
    	solve();
}