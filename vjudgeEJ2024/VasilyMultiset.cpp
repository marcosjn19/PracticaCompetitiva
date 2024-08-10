#include <bits/stdc++.h> 
using namespace std;
map<unsigned int, int> contador;

unsigned int getMax ( set<unsigned int> &conjunto, unsigned int s ) {
	unsigned int izq = 0;
	unsigned int der = ~izq;
	unsigned int optimo = ~s;
	for ( int i = 31; i >= 0; --i ){
		if ( optimo & ( 1 << i ) ){
			if ( conjunto.lower_bound(izq+(1<<i)) != conjunto.end() && *conjunto.lower_bound(izq+(1<<i)) <= der ){
				izq += (1<<i);
			}else{
				der -= (1<<i);
			}
		}else{
			if ( conjunto.lower_bound(izq) != conjunto.end() && *conjunto.lower_bound(izq)<izq+(1<<i) ){
				der -= (1<<i);
			}else{
				izq += (1<<i);
			}
		}
	}
	return (izq^s);
}

void solve () {
	
	set<unsigned int> conjunto;
	conjunto.insert(0);
	int nQ; cin >> nQ;
	while ( nQ-- ) {
		string op; cin >> op;
		unsigned int n; cin >> n;
		if ( op == "+" ){
			if (!contador[n]) 
				conjunto.insert(n);
			contador[n]++;
		}else{
			if ( op == "-" ){
				contador[n]--;
				if ( !contador[n] )
				 conjunto.erase(n);
			}else{
				cout << getMax(conjunto, n) << endl;
			}
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
    solve();
}