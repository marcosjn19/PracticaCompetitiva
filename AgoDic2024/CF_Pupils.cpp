#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;


void solve () {
	vector<pair<int,int>> amistades;
	int n; cin >> n;
	int m; cin >> m;
	for ( int i = 0; i < m; i++ ) {
		int a; cin >> a;
		int b; cin >> b;
		amistades.push_back(make_pair(a,b));
	}

	for ( auto i: amistades ) {
		cout << i.first << "  " << i.second << endl;
	}
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
	solve();
}