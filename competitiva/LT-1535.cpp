#include <bits/stdc++.h> 
using namespace std;

int getWinner(vector<int>& arr, int k) {
    int c = 0;
    int idxM = 0;
    for ( int i = 1; i < arr.size(); i++ ) {
        if ( arr[idxM] > arr[i] ){
            c++;
        }else{
            c=1;
            idxM=i;
        }

        if ( c >= k )
            return arr[idxM];
    }
    return arr[idxM];
}
void solve(){
    vector<int>arr = {1,25,35,68,42,70};
    int k = 3;
    cout << getWinner(arr, k) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}