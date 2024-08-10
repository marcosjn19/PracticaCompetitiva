#include <bits/stdc++.h> 
using namespace std;

bool isNumber(string s) {
    vector<char>digitos = {'0','1','2','3','4','5','6','7','8','9'};
    vector<char>validos = {'.','1','2','3','4','5','6','7','8','9','0','+','-','e','E'};
    vector<char>numeros;
    bool punto = false;
    bool e = false;
    for ( int i = 0; i < s.size(); i++ ) {
        if (std::find(validos.begin(), validos.end(), s[i]) == validos.end())
            return false;
        
        if (std::find(digitos.begin(), digitos.end(), s[i]) != digitos.end()){
            numeros.push_back(s[i]);
        }

        switch ( s[i] ){
            case '+':
            case '-':
                if ( i == s.size()-1)
                    return false;
                if ( i == 0 || e){
                    if ( std::find(digitos.begin(), digitos.end(), s[i+1]) == digitos.end() && s[i+1]!='.')
                        return false;
                    if ( e )
                        if ( s[i-1] != 'e' && s[i-1] != 'E')
                            return false;
                }else{
                    return false;
                }
                break;
            case '.':
                if ( punto )
                    return false;
                if (e)
                    return false;
                if ( s.size() == 1 )
                    return false;
                if ( i == 0 ){
                    if (std::find(digitos.begin(), digitos.end(), s[i+1]) == digitos.end())
                        return false;
                }else{
                    if ( i == s.size()-1 ){
                        if ( std::find(digitos.begin(), digitos.end(), s[i-1]) == digitos.end())
                            return false;
                    }else{
                        if (  std::find(digitos.begin(), digitos.end(), s[i-1]) == digitos.end() && std::find(digitos.begin(), digitos.end(), s[i+1]) == digitos.end())
                            return false;
                    }
                }
                punto = true;
                break;
            case 'e':
            case 'E':
                if (e)
                    return false;
                if ( numeros.size() == 0 )
                    return false;
                if ( i == s.size()-1 )
                    return false;
                if ( numeros.size()==0 && std::find(digitos.begin(), digitos.end(), s[i+1]) == digitos.end() && s[i+1] != '.')
                    return false;
                e = true;
                numeros.clear();
                punto = false;
                break;
        }
    }
    return true;
}

void solve(){
    string entrada = "092e359-2";
    cout << entrada << endl;
    cout << isNumber(entrada) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}