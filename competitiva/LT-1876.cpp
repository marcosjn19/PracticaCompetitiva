#include <bits/stdc++.h> 
using namespace std;

int countGoodSubstrings(string s) {
    vector<int>grupo;
    int c=0;
    int i = 0;
    while ( i < s.size() ) {
        if (std::find(grupo.begin(), grupo.end(), (int)s[i]) == grupo.end()){
            grupo.push_back((int)s[i]);
            if ( grupo.size() == 3 ){
                c++;
                grupo.clear();
                i-=2;
            }
        }else{
            i-=grupo.size();
            grupo.clear();
        }
        i++;
    }
    return c;
}

void solve(){
    string entrada;
    cin >> entrada;
    cout << countGoodSubstrings(entrada) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}