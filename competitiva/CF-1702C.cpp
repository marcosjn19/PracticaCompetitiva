/*#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int nEstaciones;
    cin >> nEstaciones;
    int viajes;
    cin >> viajes;
    vector<int> estaciones;
    for ( int i = 0; i < nEstaciones; i++ ) {
        int estacion;
        cin >> estacion;
        estaciones.push_back(estacion);
    }

    for ( int i = 0; i < viajes; i++ ){
        int e1;
        int e2;
        cin >> e1;
        cin >> e2;
        if ( std::find(estaciones.begin(), estaciones.end(), e1) != estaciones.end()){
            int posE1 = std::find(estaciones.begin(), estaciones.end(), e1);
        }
        int posE2 = std::find(estaciones.begin(), estaciones.end(), e1);
        
        if ( posE2 > posE1 && posE2 != -1 && posE1 != -1){
            cout << "YES" << endl;
            cout << posE1 << "   " << posE2 << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    int cases;
    cin >> cases;
    while (cases--)
        solve();
}*/