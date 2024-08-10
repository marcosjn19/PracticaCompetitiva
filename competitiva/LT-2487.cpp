#include <bits/stdc++.h> 
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNodes(ListNode* head) {
    ListNode* aux=head;
    vector<ListNode*>direcciones;
    while ( aux != nullptr ){
        while ( direcciones.size()>0 && direcciones.back()->val < aux->val){
            direcciones.pop_back();
        }
        direcciones.push_back(aux);
        aux = aux->next;
    }

    if ( direcciones.size() > 0 ){
        head = direcciones.front();
        for ( int i = 0; i < direcciones.size()-1; i++ ){
            cout << direcciones[i]->val;
            direcciones[i]->next = direcciones[i+1];
        }
        return head;
    }
}


void solve(){
}

int main(){
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);  
    solve();
}