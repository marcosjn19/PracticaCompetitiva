#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void hijosTotales ( long int min ){
    long int celulasMaduras = 0;
    long int celulasNacidas = 1;
    long int celulasMuertas = 0;

    
    cout << celulasMaduras + celulasNacidas - celulasMuertas;
}

void solve ( long int min ) {
    hijosTotales( min );
    return;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    int casos; cin >> casos;
    while ( casos -- ){
        long int min; cin >> min;
        solve(min);
    }
    
}