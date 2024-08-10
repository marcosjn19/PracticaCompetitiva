#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int pI = 0;
    int pD = height.size()-1;
    int area = 0;
    int aux = 0;
    while ( pI < pD ){
        if ( height[pI] > height[pD] ){
            aux = (pD-pI) * height[pD];
        }else{
            aux = (pD-pI) * height[pI];
        }

        if ( aux > area ){
            area = aux;
        }

        if ( height[pD] > height[pI] ){
            pI++;
        }else{
            pD--;
        }
    }
    return area;
}

void solve(){
    vector<int>height = {1,1,1,4,1,1,1,1,4,1,1,1,1};
    //cout << "h" << endl;
    cout << "SOLUCION " << maxArea(height) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}