#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
    int size; cin >> size;
    vector<int>heights;
    while ( size-- ) {
        int a; cin >> a;
        heights.push_back(a);
    }
    sort ( heights.begin(), heights.end() );
    
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}