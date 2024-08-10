#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	int n; cin >> n;
	map<string, int>nombres;
	for ( int i = 0; i < n; i++ ){
		string nombre; cin >> nombre;
		if ( nombres.count(nombre) == 0 ){
			nombres[nombre] = i;
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}