#include <bits/stdc++.h> 
using namespace std;

long long maximumHappinessSum(vector<int>& happiness, int k) {
    sort(happiness.begin(), happiness.end(), greater<int>());
    long long total=0;
    for ( int i = 0; i < k; i++ ){
        if ( happiness[i]-i > 0)
            total += (happiness[i]-i);
    }
    return total;
}

void solve(){
    vector<int>happiness = {12,1,42};
    int k = 3;
    cout << maximumHappinessSum(happiness, k) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}