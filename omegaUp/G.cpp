#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int value ( string word ){
	int res = 0;
	for ( char i: word ){
		if ( i >= '0' && i <= '9' ){
			i-='0';
			res += i;
			continue;
		}

		if ( i >= 'a' && i <= 'z' ){
			i -= 'a';
			res += (i+10);
			continue;
		}

		if ( i >= 'A' && i <='Z' ){
			i -= 'A';
			i *= 2;
			i += 20;
			res += i;
			continue;
		}
	}
	return res;
}

void solve () {
	string A;
	string B;
	cin >> A; cin >> B;
	int a = value(A);
	int b = value(B);
	if ( a > b ){
		cout << "Ana " << a << endl;
	}else{
		cout << "Carolina " << b << endl;
	}
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}