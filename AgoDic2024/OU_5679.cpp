#include <bits/stdc++.h> 
using namespace std;


void solve () {
	string ar1;
	string ar2;
	getline(cin, ar1);
	getline(cin, ar2);
	ar1[0] = '0'; ar1[ar1.size()-1] = ',';
	ar2[0] = '0'; ar2[ar2.size()-1] = ',';
	stringstream aux1(ar1);
	stringstream aux2(ar2);
	string numero1; string numero2;

	vector<int> numeros1;
	while ( getline( aux1, numero1, ',') ) {
		if ( !numero1.empty() )
		numeros1.push_back(stoi(numero1));
	}

	vector<int>numeros2;
	while ( getline( aux2, numero2, ',') ) {
		if ( !numero2.empty() )
		numeros2.push_back(stoi(numero2));
	}

	for ( int i = 0; i < numeros1.size(); i++ ) {
		if ( numeros1[i] < numeros2[i] ) {
			cout << "Less" << endl;
			return;
		}

		if ( numeros1[i] > numeros2[i] ) {
			cout << "Greater" << endl;
			return;
		}
	}
	cout << "Equal" << endl;
	return;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}