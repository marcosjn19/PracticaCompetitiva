#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
    long unsigned int obj; cin >> obj;
    int size; cin >> size;

    vector<int> numeros;
    while ( size-- ){
        int n; cin >> n;
        numeros.push_back(n);
    }

    sort(numeros.begin(), numeros.end());
    for ( int i : numeros ){
        if ( (obj%i) == 0 ){
            if ( binary_search(numeros.begin(), numeros.end(), (obj/i)) ){
                cout << i << " " << (obj/i) << endl;
                break;
            }
        }
    }
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}