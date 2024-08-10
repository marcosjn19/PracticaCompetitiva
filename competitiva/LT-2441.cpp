#include <bits/stdc++.h> 
using namespace std;

int findMaxK(vector<int>& nums) {
    sort(nums.begin(), nums.end(), greater<int>());
    int pI, pD;
    pI = 0;
    pD = nums.size()-1;
    while ( true ) {
        if ( (nums[pI] + nums[pD]) == 0){
            return nums[pI];
        }else{
            if ( (nums[pI] + nums[pD]) > 0){
                pI+=1;
            }else{
                pD-=1;
            }

            if ( pI > pD ){
                return -1;
            }
        }
    }
}

void solve(){
    vector<int>nums = {-10,8,6,7,-2,-3};
    cout << findMaxK(nums) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}