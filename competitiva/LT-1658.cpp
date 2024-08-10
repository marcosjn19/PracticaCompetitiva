#include <bits/stdc++.h> 
using namespace std;

int minOperations(vector<int>& nums, int x) {
    int oG = nums.size();
    while ( nums.size()>1 ){
        if ( nums[0] > x && nums[nums.size()-1] > x)
            return -1;

        if ( nums[0] == x ){
            return (oG - nums.size());
        }

        if ( nums[nums.size()-1] == x ){
            return (oG - nums.size());
        }

        if ( nums[0] + nums[nums.size()-1] == x ){
            return (oG - nums.size());
        }
        for ( int i = 0; i < nums.size()-1; i++ ){
            nums[i] = nums[i+1];
            nums.pop_back();
        }   
    }
    return -1;
}

void solve(){   
    vector<int>nums = {3,2,20,1,1,3};
    
    int x = 10;
    cout << minOperations(nums, x) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}