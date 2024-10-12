#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
    string pt = "[^" + allowed + "]";
    regex reg(pt);
    int cont = words.size();
    for ( string i : words ) {
        if ( regex_search (i, reg) )
            cont--;
    }
    return cont;
}

void solve () {
    string allowed = "ab";
    vector<string> words = {"ad","bd","aaab","baa","badab"};
    cout << countConsistentStrings ( allowed, words ) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}