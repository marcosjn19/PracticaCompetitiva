#include <bits/stdc++.h> 
using namespace std;
vector<int> tamanoPiramides;

void solve () {
    int tam; cin >> tam;
    int cont = 0;
    cout << "Altura: " << tam << endl;
    while ( tam >= 2 ) {
        int h1 = sqrt((tam*2));
        double h2 = (double)h1/3;
        double hR = round(h2);
        cout << h1 << "  " << "  " << h2 << "  " << hR << endl;
        tam -= (2 + (5 + 3 *(hR-1)));
        cont++;
    }
    cout << "Contador:  " << cont << endl;
    cout << "---------" << endl;
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