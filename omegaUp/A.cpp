#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve ( string personas) {
	int contM  = 0;
	int nPersonas = 0;
	for ( int i = 0; i < personas.size(); i++ ){
		if ( personas[i] == '+' ){
			contM++;
			nPersonas = std::max(contM, nPersonas);
		}else{
			if ( contM == 0 ){
				nPersonas++;
			}else{
				contM--;
			}
		}
	}
	cout << nPersonas << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	string personas;
	while ( getline(cin, personas)) 
		solve( personas );
}