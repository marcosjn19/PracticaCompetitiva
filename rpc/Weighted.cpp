#include <bits/stdc++.h> 
using namespace std;

void solve( int n, int k ){
    vector<int>numeros;
    for ( int i = 0; i < n; i++ ){
        int num;
        cin >> num;
        numeros.push_back(num);
    }
     
    vector<pair<int,int>>ventanasPeso;
       int sum=0;
    for ( int i = 0; i <= numeros.size()-k; i++ ){
        int aux = 1;
        for ( int j = i; j < i+k; j++ ){
            sum += numeros[j]*aux;
            aux++;
        }
        ventanasPeso.push_back({sum ,i+1});
        sum=0;
    }
    sort(ventanasPeso.begin(), ventanasPeso.end() );
    for ( pair<int, int> i: ventanasPeso ){
        cout << i.second << " " << i.first << endl;
    }
    
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    int n;
    cin >> n;
    int k;
    cin >> k;
    solve(n, k);
}  