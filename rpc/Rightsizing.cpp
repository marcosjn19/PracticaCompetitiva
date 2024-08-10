#include <bits/stdc++.h> 
using namespace std;

void solve(int nEmp, int nAc){
    vector<string>nombres;
    vector<pair<string,int>>nombres2;
    unordered_map<string, int>sueldos;
    for ( int i = 0; i < nEmp; i++ ){
        string n;
        cin >> n;
        int s;
        cin >> s;
        nombres2.push_back({n, s});
        sueldos.insert({n, s});
    }
    sort(nombres2.begin(), nombres2.end());

    for ( int i = 0; i < nAc; i++ ){
        int c; 
        cin >> c; 
        if ( c == 1 ){
            string n;
            cin >> n;
            int s;
            cin >> s;
            sueldos.at(n) += s;
            for ( int i = 0; i < nombres2.size(); i++ ){
                if ( nombres2[i].first == n ){
                    nombres2[i].second+=s;
                    break;
                }
            }
        }else{
            vector<pair<string,int>> pairs;
            for ( auto& empleados: sueldos ){
                pairs.push_back(empleados);
            }

            std::sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) { 
                return a.second < b.second; 
            }); 

            int sueldoMasAlto = pairs[pairs.size()-1].second;
            string nombreSueldoA = pairs[pairs.size()-1].first;
            string nombreAlto="";
            for ( int i = 0; nombres2.size(); i++ ){
                if ( nombres2[i].second == sueldoMasAlto ){
                    nombreAlto = nombres2[i].first;
                    sueldos.erase(nombreAlto);
                    nombres2[i].first = ""; 
                    nombres2[i].second = 0;
                    cout << nombreAlto << " " << sueldoMasAlto << endl;
                    break;
                }
            }
        }
    }
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    int nEmp, nAc;
    cin >> nEmp;
    cin >> nAc;
    solve(nEmp, nAc);
}  