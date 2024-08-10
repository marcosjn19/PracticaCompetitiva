#include <bits/stdc++.h> 
using namespace std;

void solve () {
    int nC; cin >> nC;
    vector<int> candies;
    while ( nC-- ) {
        int c; cin >> c;
        candies.push_back(c);
    }

    int alice = 0;
    int bob   = 0;
    int lastMove = -1;
    int totalT = 0;
    int alIdx  = 0;
    int bobIdx = candies.size()-1;
    int cIdx = 0;
    bool turno = true;
    int aux = 0;

    if ( candies.size() == 1 ){
        cout << 1 << " " << candies[0] << " " << 0 << endl;
        return;
    }

    while ( alIdx <= bobIdx ) {
        if ( turno ){
            cIdx = alIdx;
            alIdx++;
        }else{
            cIdx = bobIdx;
            bobIdx--;
        }

        aux += candies[cIdx];

        if ( aux > lastMove ) {
            lastMove = aux;
            if ( turno ){
                alice += lastMove;
            }else{
                bob += lastMove;
            }
            aux = 0;
            totalT++;
            turno = !turno;
        }
    }

    if ( aux > 0 ) {
        if ( turno ){
            alice+=aux;
        }else{
            bob+=aux;
        }
        totalT++;
    }
    cout << totalT << " " << alice << " " << bob << endl;
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