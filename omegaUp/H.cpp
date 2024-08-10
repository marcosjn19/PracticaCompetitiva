#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	char a;
	string numero; 
	cin >> numero;
	int n = 1;
	int suma = 0;
	if ( numero[0] == '-' || numero.size() > 5 ){
		cout << '0' << endl;
		return;
	}

	for ( char a : numero ) {
		suma += ((a*n)-'0');
	}
	cout << suma << endl;
	return;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	solve();
}