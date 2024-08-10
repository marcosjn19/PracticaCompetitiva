#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

string solve (string s1, string s2) {
    string v = "aeiou";
    char u = 'o';
    string res="";
    for ( int i = 0; i < s1.size(); i++ ){
        if ( std::find(v.begin(), v.end(), s1[i]) != v.end() && i!=0){
            u = s1[i];
            break;
        }else{
            res+=s1[i];
        }
    }

    string res2="";
    for ( int i = s2.size()-1; i >= 0; i-- ){
        if ( std::find(v.begin(), v.end(), s2[i] ) != v.end() && i!=s2.size()-1){
            u = s2[i];
            break;
        }else{
            res2= s2[i] + res2;
        }
    }
    return res+u+res2;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    cout << solve(s1, s2);
}