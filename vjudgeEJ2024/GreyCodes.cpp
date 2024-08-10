#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	int a; cin >> a;
	int n; cin >> n;
	int res = n ^ (n>>1);
	cout << res << endl;
	return;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int cases; cin >> cases;
	while ( cases-- )
    	solve();
}