#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve ( int n ) {
	vector<unsigned int>B;
	while ( n-- ){
		int c; cin >> c;
		B.push_back(c);
	}
	queue<unsigned int>A;
	A.push(B[0]);

	for ( int i = 1; i < B.size(); i++ ){
		A.push(B[i]^B[i-1]);
	}

	while ( A.size() ){
		cout << A.front() << " ";
		A.pop();
	}
	cout << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int size;
	cin >> size;
	while ( size ){
		solve(size);
		cin >> size;
	}
}