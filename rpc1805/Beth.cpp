#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	int size; cin >> size;
	if ( size == 2 ){
		cout << 1 << endl;
		return;
	}
	
	string par;
	while ( size-- ) {
		char c; cin >> c;
		par+=c;
	}

	vector<char>aux;
	aux.push_back(par[1]);
	int a=0;
	int result = 1;

	for ( int i = 2; i < par.size()-1; i++ ){
		if ( aux.back() == '(' && par[i] == ')' ){
			aux.pop_back();
			a++;
		}else{
			aux.push_back(par[i]);
		}
		
		if ( aux.size() == 0 ){
			result*=a;
			a = 0;
		}
	}
	result++;
	std::cout << result << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	solve();
}