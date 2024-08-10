#include <bits/stdc++.h> 
using namespace std;

void solve () {
	int n; cin >> n;
	int k; cin >> k;
	vector<int>participantes;
	while ( n-- ) {
		int score; cin >> score;
		if ( score <= 0) {
			break;
		}else{
			participantes.push_back(score);
		}
	}

	if ( k >= participantes.size() ) {
		cout << participantes.size() << endl;
		return;
	}

	for ( int i = k-1; i < participantes.size()-1; i++ ) {
		if ( participantes[i] == participantes[i+1] ) {
			k++;
		}else{
			break;
		}
	}
	cout << k << endl;
	return;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  
    solve();
}