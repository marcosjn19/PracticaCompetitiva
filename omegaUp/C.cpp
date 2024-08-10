#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve () {
	int s; cin >> s;
	map<double, int>sucur;
	int ind = 0;
	while ( s-- ){
		double pos; cin >> pos;
		sucur.insert({pos,ind++});
	}
	int n; cin >> n;
	int cN = 1;
	int auxD = 0;
	if ( n == 2 ){
		cout << sucur.rbegin()->first - sucur.begin()->first << endl;
	}else{
		for ( auto i = sucur.rbegin(); i != sucur.rend(); i++){
			cN = 1;
			auxD = 0;
			double distance = (i->first - sucur.begin()->first);
			distance = distance/2;
			auxD = distance;
			while ( true ){
				if ( sucur.find(i->first - auxD) != sucur.end() ){
					cN++;
					auxD *= 2;
					if ( cN == n ){
						cout << distance << endl;
						return;
					}
				}else{
					break;
				}
			}
		}
	}
	
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	solve();
}