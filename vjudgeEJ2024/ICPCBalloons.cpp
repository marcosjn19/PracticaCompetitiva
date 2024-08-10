#include <bits/stdc++.h> 
using namespace std;

void solve () {
    int n; cin >> n;
    map<char, int> problemas;
    int total = 0;
    while ( n-- ) {
        char c; cin >> c;
        if ( problemas.count(c) ){
            total += 1;
        }else{
            total += 2;
            problemas[c] = 1;
        }
    }
    cout << total << endl;
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