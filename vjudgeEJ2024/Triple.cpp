#include <bits/stdc++.h>
using namespace std;

void solve () {
    int s; cin >> s;
    map<int, int> numeros;
    vector<int> repeti;
    while ( s-- ) {
        int n; cin >> n;
        if ( numeros.find(n) == numeros.end() ){
            numeros[n] = 1;
        }else{
            numeros[n]++;
        }
        if ( numeros[n] == 3 ){
            repeti.push_back(n);
        }
    }

    if ( repeti.size() == 0 ){
        cout << -1 << endl;
        return;
    }
        
    cout << repeti[0] << endl;
    return;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
    int cases; cin >> cases;
    while ( cases-- )
        solve();
}