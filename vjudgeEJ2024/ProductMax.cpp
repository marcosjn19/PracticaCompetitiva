#include <bits/stdc++.h> 
using namespace std;

long long getMax ( long long a, long long b, long long c, long long d ){
    long long m1 = std::max(a*c, a*d);
    long long m2 = std::max(b*c, b*d);

    return std::max(m1, m2);
}
void solve () {
	long long a; cin >> a;
	long long b; cin >> b;
	long long c; cin >> c;
	long long d; cin >> d;
	cout << getMax(a,b,c,d) << endl;
	return;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}