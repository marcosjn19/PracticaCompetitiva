#include <bits/stdc++.h> 
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    for ( int i:nums2 ){
        nums1.push_back(i);
    }
    sort(nums1.begin(), nums1.end());
    if ( nums1.size()%2 != 0 ){
        return nums1[nums1.size()/2];
    }else{
        return ( (nums1[(nums1.size()/2)-1] + nums1[(nums1.size()/2)])/2.0 );
    }
}

void solve(){
    vector<int>a1 = {1,2};
    vector<int>a2 = {3,4};
    cout << findMedianSortedArrays(a1, a2) << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}