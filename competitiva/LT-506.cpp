#include <bits/stdc++.h> 
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    vector<int>copyScore = score;
    sort (copyScore.begin(), copyScore.end(), greater<int>());
    vector<string>result;
    for ( auto i:score ){
        if ( i == copyScore[0]){
            result.push_back("Gold Medal");
        }else{
            if ( i == copyScore[1]){
                result.push_back("Silver Medal");
            }else{
                if ( i == copyScore[2]){
                    result.push_back("Bronze Medal");
                }else{
                    result.push_back(std::to_string(std::distance(copyScore.begin(), std::find(copyScore.begin(), copyScore.end(), i))+1));
                }
            }
        }
    }
    return result;
}

void solve (){
    vector<int>score = {10,3,8,9,4};
    for ( auto i:findRelativeRanks(score) ){
        cout << i << endl;
    }
}
int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}