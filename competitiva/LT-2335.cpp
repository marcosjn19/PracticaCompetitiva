#include <bits/stdc++.h> 
using namespace std;

int fillCups(vector<int>& amount) {
    int total = 0;
    sort(amount.begin(), amount.end(), greater<int>());
    while ( amount[0] > 0){
        amount[0]--;
        amount[1]--;
        total++;
        sort(amount.begin(), amount.end(), greater<int>());
    }
    return total;
}

void solve(){
    vector<int>amount = {5,4,4};
    cout << fillCups(amount) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}