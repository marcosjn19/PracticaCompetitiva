#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int contarEncendidos(int x){ 
    int cont = 0; 
    while (x){ 
        x &= (x-1); 
        cont++; 
    } 
    return cont; 
}


int minBitFlips(int start, int goal) {
	return contarEncendidos(start ^ goal);
}

void solve () {
	int n1; int n2;
	cin >> n1; 
	cin >> n2;
	cout << minBitFlips(n1,n2) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}