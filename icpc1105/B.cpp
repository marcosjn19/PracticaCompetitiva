#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
long int hijos=0;

void hijosTotales ( long int tiempoVida, long int h, long int tiempoTotal, long int &total, long int min){
    total += h;
    tiempoVida+=2;
    tiempoTotal+=2;
    if ( tiempoTotal > min ){
        return;
    }
    
    while ( tiempoVida < 20 ){
        tiempoVida+=4;
        tiempoTotal+=4;
        if ( tiempoTotal > min ){
            return;
        }
        hijosTotales(0, h*3, tiempoTotal, total, min);
    }
    total-=h;
    return;
}

void solve ( int min ) {
    hijosTotales(0, 1, 0, hijos, min);
    return;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    int casos; cin >> casos;
    while ( casos -- ){
        long int min; cin >> min;
        solve(min);
        cout << hijos << endl;
        hijos = 0;
    }
    
}