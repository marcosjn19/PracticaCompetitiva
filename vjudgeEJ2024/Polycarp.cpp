#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	vector<char> letters; 
	int days = 0;
	string word; cin >> word;
	for ( char a: word ){
		if ( letters.size() == 3 ){
			if ( find(letters.begin(), letters.end(), a) == letters.end() ){
				days++;
				letters.clear();
				letters.push_back(a);
			}
		}else{
			if ( find(letters.begin(), letters.end(), a) == letters.end() ){
				letters.push_back(a);
			}
		}
	}
	if ( letters.size() > 0 )
		days++;
	cout << days << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int cases; cin >> cases;
	while ( cases-- )
    	solve();
}