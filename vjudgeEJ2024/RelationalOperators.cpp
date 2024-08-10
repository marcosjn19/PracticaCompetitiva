#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

string solve () {
	int n1; cin >> n1;
	int n2; cin >> n2;
	if ( n1 > n2 ){
		return ">";
	}

	if ( n1 < n2 )
		return "<";

	return "=";
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int cases; cin >> cases;
	while ( cases-- )
    	cout << solve() << endl;
}