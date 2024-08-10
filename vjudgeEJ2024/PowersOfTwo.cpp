#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
    int n; cin >> n;
    vector<int> numeros;
    while ( n-- ){
        int s; cin >> s;
        numeros.push_back(s);
    }

    int aux=0;
    //if ( ((numeros[i]+numeros[j])&(numeros[i]+numeros[j]-1)) == 0)
    //aux++;
        
    std::cout << aux << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}