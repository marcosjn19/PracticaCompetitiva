#include <bits/stdc++.h> 
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    
    int izq = 1 + maxDepth(root->left);
    int der = 1 + maxDepth(root->right); 
    
    return max(izq, der);
}

void solve(){
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}