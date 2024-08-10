#include <bits/stdc++.h> 

using namespace std;

void solve () {
	int s; cin >> s;
	int goal; cin >> goal;
	vector<int> p;
	while ( s-- ) {
		int n; cin >> n;
		p.push_back(n);
		if ( n == goal ){
			cout << p.size() << endl;
			return;
		}
	}
	return;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}