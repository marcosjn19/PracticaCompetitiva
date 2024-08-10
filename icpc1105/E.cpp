#include <bits/stdc++.h> 
using namespace std;

void solve ( int a, int b, int k) {
	vector<int>resultados;
	for ( int i = 1; i <= k; i++ ){
		resultados.push_back(a*i + b);
	}

	for ( int i : resultados ){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int a; cin >> a; 
	int b; cin >> b;
	int k; cin >> k;

    solve(a, b, k);
}