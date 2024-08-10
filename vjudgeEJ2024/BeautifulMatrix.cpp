#include <bits/stdc++.h> 
using namespace std;

void solve () {
    int f, c;
    f = c = 0;
    for ( int i = 1; i < 6; i++ ) {
        for ( int j = 1; j < 6; j++ ) {
            int aux; cin >> aux;
            if ( aux == 1 ){
                f = i; c = j;
            }
        }
    }
    cout << abs(3-f) + abs(3-c) << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
    solve();
}