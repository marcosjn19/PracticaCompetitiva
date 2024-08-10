#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

string reversePrefix(string word, char ch){
    int pos = word.find(ch);
    cout << pos << endl;
    string invertido = word.substr(0,pos+1);
    reverse(invertido.begin(), invertido.end());
    if (pos!=-1){
        return invertido + word.substr(pos+1, word.size()-1);
    }else{
        return word;
    }
}
void solve(){
    string entrada;
    cin >> entrada;
    cout << reversePrefix(entrada, 'z') << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}