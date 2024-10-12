#include <bits/stdc++.h> 
using namespace std;

int minBills ( int currentMoney ) {
	int billCount = 0;
	if ( currentMoney / 100 ) {
		billCount += currentMoney/100;
		currentMoney%=100;
	}

	if ( currentMoney / 20 ) {
		billCount += currentMoney/20;
		currentMoney %= 20;
	}

	if ( currentMoney / 10 ) {
		billCount += currentMoney/10;
		currentMoney %= 10;
	}

	if ( currentMoney / 5 ) {
		billCount += currentMoney/5;
		currentMoney %= 5;
	}
	
	if ( currentMoney / 1 ) {
		billCount += currentMoney/1;
		currentMoney %= 1;
	}

	return billCount;
}
void solve () {
	int money; cin >> money;
	cout << minBills ( money ) << endl;
}

int main(){
	// freopen("input.txt", "r", stdin); 
	// freopen("output.txt", "w", stdout);  
	solve();
}