#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve (int t) {
    vector<int>torres;
    bool winner=true;
    while ( t-- ){
        int a; cin >> a;
        torres.push_back(a);
    }
    sort(torres.begin(), torres.end());
    int indice = 0;
    while ( torres[torres.size()-1] > 0 ){
        for ( int i = indice+1; i < torres.size(); i++ ){
            torres[i] -= torres[indice];
        }
        torres[indice] = 0;
        winner = !winner;
        indice++;
    }

    if ( winner ){
        cout << "Alicius" << endl;
    }else{
        cout << "Bobius" << endl;
    }
    return;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    int towers; cin >> towers;
    solve(towers);
}