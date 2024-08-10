#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int acum = 1;
int alex = 0;


void solve () {
	int size; cin >> size;
	
	string par;
	while ( size-- ) {
		char c; cin >> c;
		par+=c;
	}

	vector<char>aux;
	int a=0;
	int result=0;
	for ( int i = 0; i < par.size(); i++ ){
		if ( par[i] == ')' ){
			if ( aux.size() > 0 )
				aux.pop_back();
			a++;
		}else{
			aux.push_back(par[i]);
		}
	
		if ( aux.size() == 0 ){
			if ( result == 0){
				result = a;
			}else{
				result *= a;
			}
			a = 0;
		}
	}
	std::cout << result << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
	int cases; cin >> cases;
	while ( cases-- ){
		solve();
	}
}