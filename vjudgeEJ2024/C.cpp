#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void contarMultiplos ( long int i, long int T, long int max, int &cont) {
	if ( (T%i) == 0 ){
		cont++;
	}
	if ( i == max )
		return;
	i++;
	contarMultiplos(i, T, max, cont);
	return;
}

void solve () {
	int cases; cin >> cases;
	vector<long int>rel; 
	vector<long int>abu;
	while ( cases-- ){
		long int n; cin >> n;
		rel.push_back(n);
		long int t; cin >> t;
		t--;
		abu.push_back(t);
	}
	int cont = 0;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}