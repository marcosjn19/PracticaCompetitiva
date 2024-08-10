#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

string gcdOfStrings(string str1, string str2) {
    int gcd = std::__gcd( str1.size(), str2.size());
    if ( gcd == 0 ){
        return "";
    }
    string divisor="";
    string mayor;
    if ( str1.size() > str2.size() ){
        mayor = str1;
        for ( int i = 0; i < gcd; i++ ){
            if ( str2[i] == str1[i] ){
                divisor += str2[i];
            }else{
                break;
            }
        }
    }else{
        if ( str1.size() == str2.size() ){
            if ( str1 == str2 ){
                return str1;
            }else{
                return divisor;
            }
        }else{
            mayor = str2;
            for ( int i = 0; i < gcd; i++ ){
                if ( str2[i] == str1[i] ){
                    divisor += str1[i];
                }else{
                    break;
                }
        }
        }
    }
    if ( divisor == "")
        return divisor;

    if ( mayor.length() % divisor.length() != 0){
        return "";
    }
    string aux;
    for ( int i = divisor.size(); i < str1.size(); i+=divisor.size()){
        aux = str1.substr(i, divisor.size());
        if ( aux != divisor ){
            return "";
        } 
    }

    for ( int i = divisor.size(); i < str2.size(); i+=divisor.size()){
        aux = str2.substr(i, divisor.size());
        if ( aux != divisor ){
            return "";
        } 
    }
    return divisor;
    
}
void solve(){
    string s1;
    cin >> s1;
    string s2; cin >> s2;
    cout << gcdOfStrings(s1, s2) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}