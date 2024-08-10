#include <bits/stdc++.h> 
using namespace std;

int maxPoints(vector<vector<int>>& points) {
    if ( points.size() < 3 )
        return points.size();
    int maximo=0;
    string m = "";
    for ( int i = 0; i < points.size(); i++ ){
        unordered_map<string, int>pendientes;
        for ( int j = i+1; j < points.size(); j++ ){
            if ( points[j][0] != points[i][0]){
                if (points[j][1] != points[i][1]) {
                    m = std::to_string( (double) (points[j][1] - points[i][1])/(points[j][0]-points[i][0]) );
                }
            }else{
                if (points[j][1] == points[i][1]) {
                    break;
                }else{
                    m = "v";
                }
            }
            pendientes[m]++;
            if ( pendientes[m] > maximo ){
                maximo = pendientes[m];
            }
        }
    }
    return maximo+1;
}
void solve(){
    //[[0,0],[4,5],[7,8],[8,9],[5,6],[3,4],[1,1]]
    vector<vector<int>>puntos7 = {{0,0}, {4,5}, {7,8}, {8,9},{5,6},{3,4},{1,1}};
    vector<vector<int>>puntos6 = {{2,3}, {3,3}, {-5,3}};
    vector<vector<int>>puntos5 = {{9,-25}, {-4,1}, {-1,5}, {-7,7}};
    vector<vector<int>>puntos4 = {{0,0},{1,-1},{1,1}};
    vector<vector<int>>puntos3 = {{1,0},{0,0}};
    vector<vector<int>>puntos2 = {{1,1},{2,2},{3,3}};
    vector<vector<int>>points = {{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};
    cout << maxPoints(points) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}