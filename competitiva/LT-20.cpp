#include <bits/stdc++.h> 
using namespace std;

bool isValid(string s) {
    vector<char>brackets;
    for ( char c:s ){
        if ( c == '(' || c == '[' || c == '{'){
            brackets.push_back(c);
        }

        if ( c == ')' ){
            if ( brackets.size() != 0 && brackets.back() == '(' ){
                brackets.pop_back();
            }else{
                return false;
            }
        }

        if ( c == ']' ){
            if ( brackets.size() != 0 && brackets.back() == '[' ){
                brackets.pop_back();
            }else{
                return false;
            }
        }

        if ( c == '}' ){
            if ( brackets.size() != 0 && brackets.back() == '{' ){
                brackets.pop_back();
            }else{
                return false;
            }
        }
    }
    if ( brackets.size() == 0 ){
        return true;
    }
    return false;
}

void solve(){
    string entrada;
    cin >> entrada;
    cout << isValid(entrada) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}