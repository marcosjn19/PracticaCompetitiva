#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	unordered_map<string,int> mapa;
	map<int,string>mapaO;
	int a; cin >> a;
	for ( int i = 0; i < (a-1); i++ ){	
		string n1;
		string n2;
		cin >> n1; cin >> n2;
		if ( mapa.find(n2) != mapa.end() ){
			if ( mapa.find(n1) != mapa.end() ){
				int aux = mapa.at(n1);
				mapa.erase(n1);
				mapaO.insert({aux, n1});
			}else{
				
			} 
			
		}
	}	

	for ( auto i = mapaO.begin(); i != mapaO.end(); i++){
		cout << i->second << endl;
	}
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
	solve();
}