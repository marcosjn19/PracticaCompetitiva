#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
struct ListNode{
	int val;
	ListNode *next;
	ListNode *behind;
	ListNode (int x) : val(x), next(NULL), behind(NULL) {}
};

void solve () {
	priority_queue<int, vector<int>, greater<int>> contratados;
	int n; cin >> n;
	int r; cin >> r;
	r--;
	int c; cin >> c;
	c--;
	ListNode *lista = new ListNode(1);
	ListNode *header = lista;
	for ( int i = 2; i <= n; i++ ){
		lista->next = new ListNode(i);
		lista->next->behind = lista;
		lista = lista->next;
	}
	lista->next = header;
	header->behind = lista;
	while ( (lista->behind != lista->next) ) {
		for ( int i = 0; i < c; i++ ) {
			lista = lista->behind;
		}

		for ( int i = 0; i < r; i++) {
			header = header->next;
		}
		if ( lista->val == header->val ){
			contratados.push(lista->val);
			lista->behind->next = lista->next;
			lista->next->behind = lista->behind;
			header = header->next;
			lista = lista->behind;
		}else{
			lista->behind->next = lista->next;
			lista->next->behind = lista->behind;
			header->behind->next = header->next;
			header->next->behind = header->behind;
			header = header->next;
			lista = lista->behind;
		}
	}
	if ( lista == header ){
		lista = lista->next;
	}
	contratados.push(lista->val);
	contratados.push(header->val);
	while ( !contratados.empty() ){
		cout << contratados.top() << " ";
		contratados.pop();
	}
	cout << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}