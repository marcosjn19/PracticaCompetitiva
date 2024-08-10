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

void dfs( TreeNode* root, int max, int& cont){
    if (root==nullptr) {
        return;
    }

    if ( root->val > max ){
        max = root->val;
        cont++;
    }
        

    dfs(root->left, max, cont);
    dfs(root->right, max, cont);
}

int goodNodes(TreeNode* root) {
    int cont = 0;
    dfs(root,-10e4,cont);
    return cont;
}

void solve(){
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}