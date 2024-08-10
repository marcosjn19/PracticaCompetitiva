#include <bits/stdc++.h> 
using namespace std;

bool squareIsWhite(string coordinates) {
    int c1 = (coordinates[0]-'a'+1)%2;
    int c2 = (coordinates[1]-'0')%2;
    if ( (c1+c2==1) ){
        return true;
    }else{
        return false;
    }
}
void solve(){
    string entrada;
    cin >> entrada;
    cout << squareIsWhite(entrada) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}