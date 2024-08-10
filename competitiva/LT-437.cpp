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

int dfs( TreeNode* root, int acum, int goal){
    if (root==nullptr) {
        return 0;
    }
    cout << "acumOg: " << acum << " ";
    
    
    cout << root->val << "  acum:" << acum << endl;
    if ( acum == goal ){
        return 1;
    }

    int contIzq = dfs(root->left, acum, goal);
    int contDer = dfs(root->right,acum, goal);
    int contNI = 0;
    int contND = 0;
    if ( acum != 0){
        contNI = dfs(root->left, 0, goal);
        contND = dfs(root->right,0, goal);
    }

    return contIzq + contDer + contNI + contND;
}

int dfs2( TreeNode* root, int cont, int goal, int acum){
    while ( root != nullptr ){
        acum+=root->val;
        if ( acum == goal ){
            return 1;
        }
        cont += dfs2(root->right, cont, goal, acum);
        cont += dfs2(root->right, cont, goal, 0);
    }
    return cont;
}

int maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    
    int izq = 1 + maxDepth(root->left);
    int der = 1 + maxDepth(root->right); 
    
    return max(izq, der);
}


int pathSum(TreeNode* root, int targetSum) {
    int cont = 0;
    int acum = 0;
    vector<pair<int,TreeNode*>>repetidos;
    //dfs(root, cont, acum, targetSum, repetidos,0,0);
    return cont;  
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
}