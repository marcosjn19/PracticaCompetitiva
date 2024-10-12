#include <bits/stdc++.h> 
using namespace std;


void solve () {
	int n; cin >> n;
	vector<int>numeros;
	float prom=0.0;
	while ( n-- ) {
		int aux; cin >> aux;
		numeros.push_back(aux);
		prom += aux;
	}

	prom = prom / numeros.size();
	sort(numeros.begin(), numeros.end() );
	printf("%.1f \n", prom);
	for ( int i : numeros ) {
		if ( i > prom ) cout << i << " ";
	}
	cout << endl;
	return;
}

int main(){
	// freopen("input.txt", "r", stdin); 
	// freopen("output.txt", "w", stdout);  
	solve();
}