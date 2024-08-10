#include <bits/stdc++.h> 
using namespace std;

void solve () {
	int n; cin >> n;
	int k; cin >> k;
	vector<int> alturas;
	int aux = 0;
	int sum = 100000000;
	multiset<int> indicesPosibles;
	for ( int i = 0; i < n; i++ ) {
		int f; cin >> f;
		aux += f;
		alturas.push_back(f);
		if ( alturas.size() == k ){
			//cout << aux << " " << sum << endl;
			if ( aux <  sum ){
				indicesPosibles.clear();
				indicesPosibles.insert(i+1-(k-1));
				sum = aux;
			}else{
				if ( aux == sum ) {
					indicesPosibles.insert(i+1-(k-1));
				}
			}
			aux-=alturas.front();
			alturas.erase(alturas.begin());
		}
	}
	cout << *indicesPosibles.begin() << endl;
	return;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  
    solve();
}