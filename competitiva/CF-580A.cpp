#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int dias;
    cin >> dias;
    int valor = 0;
    int valorAnterior = 0;
    int cont=1;
    int segmento = 1;
    for ( int i = 0; i < dias; i++){
        cin >> valor;
        if ( i > 0 ){
            if ( valor >= valorAnterior ){
                cont++;
            }else{
                if ( cont > segmento ){
                    segmento = cont;
                }
                cont = 1;
            }
        }
        valorAnterior = valor;
    }
    if ( cont > segmento ){
        segmento = cont;
    }
    cout << segmento << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}