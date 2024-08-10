#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve ( ) {
	int size; cin >> size;
	int nI; cin >> nI;
	vector<int> numeros;
	while ( size-- ) {
		int aux; cin >> aux;
		if ( aux > 0 ){
			numeros.push_back(1);
		}else{
			if ( aux < 0 ){
				numeros.push_back(-1);
			}else{
				numeros.push_back(0);
			}
		}
	}

	while ( nI-- ) {
		char mov; cin >> mov;
		int  a1; cin >> a1;
		int  a2; cin >> a2;
		a1--;
		
		if ( mov == 'M' ){
			int res=1;
			for ( int i = a1; i < a2; i++ ) {
				res*=numeros[i];
			}
			if ( res > 0 ){
				cout << "+" << endl;
			}else{
				if ( res < 0 ) {
					cout << "-" << endl;
				}else{
					cout << "0" << endl;
				}
			}
		}else{
			numeros[a1] = a2;
		}
	}
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int size;
	solve();
}