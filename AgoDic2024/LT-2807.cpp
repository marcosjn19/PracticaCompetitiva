#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int a = 10;
ListNode* insertGreatestCommonDivisors(ListNode* head) {
	while ( head ) {
		if ( std::__gcd(head->val, head->next->val) != 0 ){
			ListNode* aux = new ListNode(std::__gcd(head->val, head->next->val));
			aux->next = head->next;
			head->next = aux;
		}
		head = head->next;
	}
	return head;
}

void solve () {
	cout << "Hola" << endl;
	cout << "Probando" << endl;
	cout << "Testing" << endl;
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}