#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
int calcularVector(vector<int>& v){
    vector<int>copia = v;
    int acum=0;
    for ( int i = 0; i < copia.size(); i++ ) {
        copia[i] = copia[i]*(i+1);
        acum+=copia[i];
    }
    return acum;
}

int maxSatisfaction(vector<int>& satisfaction) {
    sort(satisfaction.begin(), satisfaction.end());
    int aux=0;
    vector<int>copia = satisfaction;
    int acum = calcularVector(satisfaction);
    for ( int i = 0; i < satisfaction.size(); i++ ) {
        copia.erase(copia.begin());
        copia.shrink_to_fit();
        aux = calcularVector(copia);
        if ( aux > acum){
            acum = aux;
        }
    }
    return acum;
}


void solve(){
    vector<int>entrada = {-2,-3,-1,0,3,5};
    cout << maxSatisfaction(entrada) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}