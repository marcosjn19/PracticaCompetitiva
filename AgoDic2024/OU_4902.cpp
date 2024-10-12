#include <bits/stdc++.h> 
using namespace std;


void solve () {
	int n; cin >> n;
	int k; cin >> k;
	int aux = 0;
	int maximo = 0;
	for ( int i = 1; i <= n; i++ ) {
		int num; cin >> num;
		aux += num;
		if ( i % k == 0 ) {
			maximo = max ( aux, maximo );
			aux = 0;
		}
	}
	cout << maximo << endl;
}

int main(){
	// freopen("input.txt", "r", stdin); 
	// freopen("output.txt", "w", stdout);  
	solve();
}