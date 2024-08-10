#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve ( ) {
	int cases; cin >> cases;
	cout << cases << endl;
	vector<int>datosP;
	queue<int>datosC;
	while ( cases-- ) {
		string accion; cin >> accion;
		string datos; cin >> datos;
		if ( accion[0] == 'm' ){
			int a; cin >> a;
			datosP.push_back(a);
			datosC.push(a);
		}else{
			cout << datosP.back() << " " << datosC.front() << endl;
			datosC.pop();
			datosP.pop_back();
		}
	}
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	solve();
}