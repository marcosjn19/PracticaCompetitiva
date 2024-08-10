#include <bits/stdc++.h> 
using namespace std;
#define ERR 1000000000000000
void solve () {
	vector<string> ordenadas;
	vector<string>valores;
	vector<string>reversa;
	int qty; cin >> qty;
	vector<long long> energia;

	
	for ( int i = 0; i < qty; i ++ ) {
		long long n; cin >> n;
		energia.push_back(n);
	}

	long long cambios[qty][2];

	for ( int i = 0; i < qty; i++ ) {
		string word; cin >> word;
		valores.push_back(word);
		reverse(word.begin(), word.end());
		reversa.push_back(word);

		cambios[i][0] = ERR;
		cambios[i][1] = ERR;
	}
	cambios[0][0] = 0;
	cambios[0][1] = energia[0];

	for ( int i = 1; i < qty; i++ ) {
		
		//Sin reversa
		if ( valores[i-1] <= valores[i] ){
			cambios[i][0] = cambios[i-1][0];
		}

		if ( valores[i] >= reversa[i-1] ){
			cambios[i][0] = std::min(cambios[i][0], cambios[i-1][1]);
		}

		//Reverseando
		if ( reversa[i] >= valores[i-1] ){
			cambios[i][1] = cambios[i-1][0] + energia[i];
		}

		if ( reversa[i] >= reversa[i-1] ) {
			cambios[i][1] = min(cambios[i][1], cambios[i-1][1]+energia[i]);
		}
	}
	long long res= std::min(cambios[qty-1][0],cambios[qty-1][1]);
	if ( res == ERR )
		res = -1;

	cout << res << endl;
	return;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  
    solve();
}