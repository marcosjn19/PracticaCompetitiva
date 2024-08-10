#include <bits/stdc++.h> 
using namespace std;

int getSum(string numeros){
	int res = 0;
	for ( char i : numeros ) {
		res += i - '0';
	}
	return res;
}

void solve () {
	string num; cin >> num;
	string n1; string n2;
	n1 = num[0]+num[1]+num[2];
	n2 = num[num.size()-1]+num[num.size()-2]+num[num.size()-3];

	if ( getSum(n1) == getSum(n2) ){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int i; cin >> i;
	while ( i-- )
    	solve();
}