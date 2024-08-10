#include <bits/stdc++.h> 
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {    
    int barcos = 0;
    int pI = 0;
    int pD = people.size()-1;
    while ( pI <= pD){
        if ( (people[pI] + people[pD]) <= limit){
            pI++;
            pD--;
            barcos++;
        }else{
            pD--;
            barcos++;
        }
    }
    return barcos;
}

void solve(){
    vector<int>personas = {1,2,2,3};
    int limite = 3;
    cout << numRescueBoats(personas, limite) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}