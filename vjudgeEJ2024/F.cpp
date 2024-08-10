#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	int prizes; cin >> prizes;
	int score; cin >> score;
	vector<int>valP;
	while(prizes--){
		int a; cin >> a;
		if ( a <= score )
			valP.push_back(a);
	}
	sort( valP.begin(), valP.end() );
	cout << valP.back() << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}