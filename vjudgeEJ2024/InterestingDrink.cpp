#include <bits/stdc++.h> 
using namespace std;

void solve () {
	int tiendas; cin >> tiendas;
	vector<int>precios;
	for ( int i = 0; i < tiendas; i++ ) {
		int p; cin >> p;
		precios.push_back(p);
	}
	sort ( precios.begin(), precios.end() );
	int days; cin >> days;
	while ( days-- ) {
		int presupuesto; cin >> presupuesto;
		cout << upper_bound(precios.begin(), precios.end(), presupuesto ) - precios.begin() << endl;
	}
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}