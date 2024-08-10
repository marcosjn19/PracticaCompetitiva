#include <bits/stdc++.h> 
using namespace std;

void solve () {
    int n; cin >> n;
    int q; cin >> q;
    vector<int> dulces;
    while ( n-- ) {
        int d; cin >> d;
        dulces.push_back(d);
    }

    sort(dulces.begin(), dulces.end(), greater<int>());
    vector<int> helper;
    helper.push_back(dulces[0]);
    for ( int i = 1; i < dulces.size(); i++ ){
        helper.push_back(dulces[i]+helper[i-1]);
    } 

    while ( q-- ) {
        int querie; cin >> querie;
        if ( querie > helper[helper.size()-1] ){
            cout << -1 << endl;
            continue;
        }
        cout << (lower_bound(helper.begin(), helper.end(), querie)-helper.begin())+1 << endl;
    }
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