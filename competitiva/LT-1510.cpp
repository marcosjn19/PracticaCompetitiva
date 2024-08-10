#include <bits/stdc++.h> 
#include <math.h>
using namespace std;
vector<int>cuadrados;
void getSquareNumbers ( int n, vector<int>&sqrts ){
    if ( n == 1 ){
        cuadrados.push_back(1);
        return;
    }
    for (int i = 1; i < n; i++ ) {
        if ( std::fmod(sqrt(i), 1.0) == 0 && i != 0){
            sqrts.push_back(i);
        }
    }
    return;
}

bool winnerSquareGame(int n) {
    getSquareNumbers(n, cuadrados);
    bool flag = false;
    while ( n > 0 ){
        while ( cuadrados.size()!=0 && cuadrados.back() >  n ){
            cuadrados.pop_back();
        }    
        n-=cuadrados.back();
        flag = !flag;
    }
    return flag;
}

void solve(){
    int n = 15;
    cout << winnerSquareGame(n) << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}