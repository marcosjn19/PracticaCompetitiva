#include <bits/stdc++.h> 
using namespace std;


void solve () {
    int s; cin >> s;    
    int t; cin >> t;
    string fila; cin >> fila;

    while ( t-- ) {
        for ( int i = 1; i < fila.size(); ++i) {
            if ( fila[i] == 'G' && fila[i-1] == 'B' ){
                fila[i] = 'B';
                fila[i-1] = 'G';
                ++i;
            }
        }   
    }
    
    cout << fila << endl;
    return;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
    solve();
}