#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> mapita;
    for ( int i : nums ) {
        mapita[i] += 1;
    } 
    int cI = 0;
    int cM = 0;
    for ( auto i : mapita ) {
        if ( i.second > cM ){
            cM = i.second;
            cI = i.first;
        }
    }

    return cI;
}

void solve () {
    vector<int>numeros = {2, 2, 2, 1};
    cout << majorityElement ( numeros ) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}