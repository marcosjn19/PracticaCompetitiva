#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
struct Alumno{
	int id;
	string nombre;
	string apellido;
	Alumno(int x, string n, string a) : id(x), nombre(n), apellido(a){}
};

void solve ( int n ) {
	vector<pair<Alumno, float>>alumnos;
	float total = 0;
	for ( int i = 0; i < n; i++ ) {
		int id; cin >> id;
		string nom; cin >> nom;
		string ap; cin >> ap;
		float cal; cin >> cal;
		alumnos.push_back({Alumno(id,nom,ap), cal});
		total+=cal;
	}
	total/=n;
	for ( auto& a : alumnos ){
		if ( a.second > total ){
			cout << a.first.id << " " << a.first.nombre << " " << a.first.apellido << endl;
		}
	}
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
	int qty; cin >> qty;
    solve( qty );
}