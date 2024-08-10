#include <bits/stdc++.h> 
using namespace std;

void solve () {
    int s; cin >> s;
    string stones; cin >> stones;
    vector <char> colors;
    int cont = 0;
    for ( char c : stones ) {
        if ( colors.empty() ) {
            colors.push_back(c);
        }else{
            if ( c == colors.back() ) {
                while ( !colors.empty() && c == colors.back() ) {
                    colors.pop_back();
                    cont++;
                }
                colors.push_back(c);
            }else{
                colors.push_back(c);
            }
        }
    }

    cout << cont << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   
    solve();
}