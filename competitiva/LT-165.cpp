#include <bits/stdc++.h>
using namespace std;

int compareVersion(string version1, string version2) {
    long double coef=1;
    int idxI=0;
    long double v1=0.0;
    long double v2=0.0;
    string recortado;
    bool flag = true;
    do{
        if ( version1.find('.')==-1 ){
            recortado = version1;
            flag = false;
        }else{
            recortado = version1.substr(idxI, version1.find('.'));
        }
        v1 += (std::stoi(recortado)/coef);
        coef *= 10;
        version1 = version1.substr(version1.find('.')+1, version1.size());
    }while(flag);

    flag = true;
    recortado = "";
    coef = 1;
    do{
        if ( version2.find('.')==-1 ){
            recortado = version2;
            flag = false;
        }else{
            recortado = version2.substr(idxI, version2.find('.'));
        }
        v2 += (std::stoi(recortado)/coef);
        coef *= 10;
        version2 = version2.substr(version2.find('.')+1, version2.size());
    }while(flag);

    cout << v1 << "  " << v2 << endl;
    if ( v1 == v2 ){
        return 0;
    }else{
        if ( v1 > v2 ){
            return 1;
        }else{
            return -1;
        }
    }
}
void solve(){
    string version1 = "0.9.9.9.9.9.9.9.9.9.9.9.9";
    string version2 = "1.0";
    cout << compareVersion(version1, version2) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}