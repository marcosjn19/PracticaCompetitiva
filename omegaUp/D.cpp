#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int getCuadrados ( int c ){
	int total = 0;
	for ( int i = 1; i <= c; i++ ){
		total += (c-i+1)*(c-i+1);
	}
	return total;
}
void solve ( int c ) {
	int nC = getCuadrados(c);
	int nR = (c*c * ((c +1)*(c+1)) / 4);
	cout << nC << " " << nR << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int c;
	while ( cin >> c ) 
		solve( c );
}