#include <bits/stdc++.h> 
using namespace std;

void solve () {
    int denominaciones[4] = {5,10,20,100};
    int n; cin >> n;
    int min = 0;
    if ( n >= denominaciones[3] ) {
        min += n/100;
        n = n%100;
    }

    if ( n >= denominaciones[2] ) {
        min += n/20;
        n = n%20;
    }

    if ( n >= denominaciones[1] ) {
        min += n/10;
        n = n%10;
    }

    if ( n >= denominaciones[0] ) {
        min += n/5;
        n = n%5;
    }

    min += n;
    cout << min << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
    solve();
}