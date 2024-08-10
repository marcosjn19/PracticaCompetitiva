#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve ( int n ) {
    vector<int>tarros;
    int total=0;
    for ( int i = 0; i < n; i++ ){
        int a; cin >> a;
        tarros.push_back(a);
        total+=a;
    }
    total/=n;
    sort ( tarros.begin(), tarros.end() );
    int mov = 0;
    int i = 0;
    while ( true ) {
        if ( (tarros[i] - total) < 0 ){
            mov += abs(tarros[i]-total);
        }else{
            break;
        }
        i++;
    }
    cout << mov << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int qty; cin >> qty;
    solve( qty );
}