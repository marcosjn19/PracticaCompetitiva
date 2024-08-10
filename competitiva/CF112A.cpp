#include <bits/stdc++.h>
using namespace std;
void solve(){
    char s[105],s1[105];
    cin >> s >> s1;
    for(int i=0;i<strlen(s);i++)
        s[i] = tolower(s[i]) , s1[i] = tolower(s1[i]);
    cout << strcmp(s,s1) << endl;
}

int main(){
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif
	solve();
}
