#include <bits/stdc++.h> 
using namespace std;

int compress(vector<char>& chars) {
    vector<char>helper;
    int cont = 1;
    int ogSize = chars.size();
    helper.push_back(chars[0]);
    for ( int i = 1; i < ogSize; i++ ){
            if ( helper.back() != chars[i] ){
                if ( cont > 1)
                    for ( char c:std::to_string(cont))
                        helper.push_back(c);

                cont=1;
                helper.push_back(chars[i]);
            }else{
                cont++;
            }
        
    }

    if ( cont > 1)
        for ( char c:std::to_string(cont))
            helper.push_back(c);
    /*for ( char c:helper ) {
        cout << c << ",";
    }*/
    chars = helper;
    return helper.size();
}

int main(){
	//freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    vector<char>test4 = {'a','b','c'};
    vector<char>test3 = {'a'};
    vector<char>test2 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    vector<char>test = {'a','a','b','b','c','c','c'};
    cout << "\n" << compress(test4) << endl;
}