#include <bits/stdc++.h> 
using namespace std;

void solve () {
	int n; cin >> n;
	vector<int> cajas;
	while ( n-- ) {
		int a; cin >> a;
		cajas.push_back(a);
	}

	sort( cajas.begin(), cajas.end() );
	int total = 0;
	for ( int i = 1; i < cajas.size(); i++ ) {
		if ( cajas[i] < cajas[0] )
			break;
		
		total += cajas[i]-cajas[0];
	}
	cout << total << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  
	int cases; cin >> cases;
	while ( cases-- )
    	solve();
}