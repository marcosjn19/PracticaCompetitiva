	#include <bits/stdc++.h> 
	using namespace std;

	void solve () {
		int s; cin >> s;
		vector<int> numeros;
		for ( int i = 0 ; i < s ; i++ ) {
			int a; cin >> a;
			numeros.push_back(a);
		}

		stack  <int> helper;
		int ord[s];
		for ( int i = s-1; i >= 0 ; i-- ) {
			while ( !helper.empty() && numeros[i] >= helper.top()){
				helper.pop();
			}
			if ( !helper.empty() ) {
				ord[i] = helper.top();
			}else{
				ord[i] = -1;
			}
			helper.push(numeros[i]);
		}

		for ( int i : ord ) {
			cout << i << " ";
		}
		cout << endl;
		return;
	}

	int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
		solve();
	}