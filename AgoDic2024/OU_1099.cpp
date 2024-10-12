#include <bits/stdc++.h> 
using namespace std;

string cifrar ( string mensaje, string clave ) {
	string claveMensaje;
	int aux = 0;
	for ( int i = 0; i < mensaje.size(); i++ ) {
		if ( aux >= clave.size() ) aux = 0;
		claveMensaje+=clave[aux++];
	}

	string encriptado="";
	aux = 0;
	for ( int i = 0; i < mensaje.size(); i++ ) {
		aux = mensaje[i] + abs(claveMensaje[i] - 'A');
		if ( aux > 'Z' ) aux-= ('Z' - 'A')+1;
		encriptado+=aux;
	}
	return encriptado;
}

string descifrar ( string encriptado, string clave ) {
	string claveMensaje;
	int aux = 0;
	for ( int i = 0; i < encriptado.size(); i++ ) {
		if ( aux >= clave.size() ) aux = 0;
		claveMensaje+=clave[aux++];
	}

	string desencriptado="";
	for ( int i = 0; i < encriptado.size(); i++ ) {
		aux = encriptado[i] - claveMensaje[i];
		aux += 'A';
		if ( aux < 'A' ) aux+= ('Z' - 'A')+1;
		desencriptado+=aux;
	}
	return desencriptado;
}

void solve () {
	int t; cin >> t;
	string msj; cin >> msj;
	string clave; cin >> clave;
	if ( t == 1 ) {
		cout << cifrar ( msj, clave ) << endl;
	} else {
		cout << descifrar ( msj, clave ) << endl;
	}
	return;
}


int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	solve();
}