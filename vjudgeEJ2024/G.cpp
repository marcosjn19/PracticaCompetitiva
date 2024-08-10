#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr){}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* insertar ( TreeNode* root, int val ) {
	if ( root == nullptr ){
		return new TreeNode(val);
	}
	if ( root->left != nullptr){
		root->right = insertar(root->right, val);
	}else{
		root->left = insertar(root->left, val);
	}
	return root;
}

int maxDepth ( TreeNode* root ) {
	if ( root == nullptr )
		return 0;

	int izq = 1 + maxDepth(root->left);
	int der = 1 + maxDepth(root->right);
	return max(izq,der);
}

void dfs ( TreeNode* root, int max, int& cont ){
	if ( root == nullptr )
	return;

	if ( root -> val > max ){
		max = root->val;
		cont++;
	}

	dfs(root->left, max, cont  );
	dfs(root->right, max, cont );
}

void solve () {
	int nodos; cin >> nodos;
	TreeNode* inicio;
	TreeNode* header = inicio;
	int cont = 0;
	while ( nodos-- ){
		int val; cin >> val;
		inicio = insertar(inicio, val);
	}
	dfs(header, 0, cont);
	cout << cont << " " << maxDepth(header);
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}