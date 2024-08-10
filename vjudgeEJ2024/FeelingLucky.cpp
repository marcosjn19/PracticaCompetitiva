#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	vector<string>paginas;
	int id = 0;
	for ( int i = 0; i < 10; i++ ) {
		string pag; cin >> pag;
		int aux; cin >> aux;
		if ( aux > id ){
			paginas.clear();
			paginas.push_back(pag);
			id = aux;
		}else{
			if ( aux == id ){
				paginas.push_back(pag);
			}
		}
		
	}

	for ( string p: paginas ) {
		cout << p << endl;
	}
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int cases; cin >> cases;
	for ( int i = 1; i <= cases; i++ ) {
		cout << "Case #" << i << ":" << endl;
		solve();
	}
    	
}