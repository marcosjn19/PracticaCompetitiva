#include <bits/stdc++.h> 
using namespace std;


int solve ( int n ) {
	if ( n <= 20 ) {
		return 1;
	} else {
		return solve(n-5) + 5 + n;
	}
}

int main(){
	// freopen("input.txt", "r", stdin); 
	// freopen("output.txt", "w", stdout);  
	int n; cin >> n;
    cout << solve(n) << endl;
}