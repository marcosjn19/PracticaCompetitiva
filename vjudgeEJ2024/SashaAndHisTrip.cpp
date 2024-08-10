#include <bits/stdc++.h> 
using namespace std;

void solve () {
    int n; cin >> n; //N Ciudades
    int v; cin >> v; //Cap. Tanque
    int aux = 1;
    int tanque = 1;
    int costo = 0;
    
    for ( int i = 1; i <= n; i++ ) {
       tanque--;
       if ( ( i + tanque ) < n ) {
            while ( tanque < v  && ( i + tanque ) < n ) {
                tanque++;
                costo += i;
            }
        } 
    } 
    cout << costo << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
    //int cases; cin >> cases;
    //while ( cases-- )
        solve();
}