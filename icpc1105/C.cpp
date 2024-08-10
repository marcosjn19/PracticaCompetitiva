#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

void solve (vector<int>&caja, vector<int>&chocolate) {
    vector<vector<int>>comb1;
    vector<vector<int>>comb2;
    comb1.push_back({caja[0],caja[1],caja[2]});
    comb1.push_back({caja[0],caja[2],caja[1]});
    comb1.push_back({caja[1],caja[0],caja[2]});
    comb1.push_back({caja[1],caja[2],caja[0]});
    comb1.push_back({caja[2],caja[0],caja[1]});
    comb1.push_back({caja[2],caja[1],caja[0]});

    comb2.push_back({chocolate[0],chocolate[1],chocolate[2]});
    comb2.push_back({chocolate[0],chocolate[2],chocolate[1]});
    comb2.push_back({chocolate[1],chocolate[0],chocolate[2]});
    comb2.push_back({chocolate[1],chocolate[2],chocolate[0]});
    comb2.push_back({chocolate[2],chocolate[0],chocolate[1]});
    comb2.push_back({chocolate[2],chocolate[1],chocolate[0]});

    int mayor = 0;
    int aux=1;
    for ( vector<int> c1 : comb1 ){
        for ( vector<int>c2 : comb2 ){
            aux *= (int)(c1[0]/c2[0]);
            aux *= (int)(c1[1]/c2[1]);
            aux *= (int)(c1[2]/c2[2]);
            if ( aux > mayor && aux > 0 )
                mayor = aux;
             aux = 1;
        }

    }
    cout << mayor << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    int L; cin >> L;
    int W; cin >> W;
    int H; cin >> H;
    int l; cin >> l;
    int w; cin >> w;
    int h; cin >> h;
    vector<int>caja = {L,W,H};
    vector<int>chocolate = {l,w,h};
    solve(caja, chocolate);
}