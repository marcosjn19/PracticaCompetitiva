#include <bits/stdc++.h> 
using namespace std;


void solve () {
	string entrada;
	cin >> entrada;
	vector<char> letras;
	int currentBigger = 0;
	int flag = 0;
	char flagChar = entrada[0];
	unordered_map<char, int> lastIndex;

	for ( int i = 1; i < entrada.length(); i++ ) {
		//cout << i << "  " << entrada[i] << endl;
		if ( entrada[i] == flagChar ) {
			if ( currentBigger < i-flag ) {
				currentBigger = i-flag;
			}
			lastIndex[entrada[i]] = i;
			i = flag+1;
			flag++;
			flagChar = entrada[flag];
		}

		if ( lastIndex [ entrada[i] ] == 0 ) {
			if ( currentBigger < i ) {
				currentBigger = i;
			}
		}
	}
	cout << flag << "  " << entrada.length() << endl;
	if ( flag != entrada.length() ) {
		if ( currentBigger < entrada.length() - flag )
			currentBigger = entrada.length()-flag;
	}
	
	if ( currentBigger == 0 )
		currentBigger = entrada.length();

	cout << currentBigger-1 << endl;
	return;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}