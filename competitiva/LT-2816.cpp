#include <bits/stdc++.h> 
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

std::string multiplyBy2(const std::string& num) {
    std::string result;
    int carry = 0;

    for (int i = num.size() - 1; i >= 0; --i) {
        int digit = (num[i] - '0') * 2 + carry;
        carry = digit / 10;
        result.insert(0, 1, '0' + (digit % 10));
    }

    if (carry > 0) {
        result.insert(0, 1, '0' + carry);
    }

    return result;
}

ListNode* doubleIt(ListNode* head) {
    string val;
    int c=1;
    vector<int>valores;
    ListNode* H = head;

    while ( head != nullptr ){
        valores.push_back(head->val);
        head = head->next;
    }        

    for ( int i = 0; i < valores.size(); i++ ){
        val += to_string(valores[i]);
    }

    val = multiplyBy2(val);
    head = H;
    bool newNode = val.size() > valores.size();
    for ( int i = 0; i < val.size(); i++ ){
        H->val = val[i]-'0';
        if ( H->next != nullptr){
            H = H->next;
        }else{
            if ( newNode ){
                H->next = new ListNode(0);
                newNode = false;
            }
            H = H->next;
        }
    }
    return head;
}

void solve(){
    long double i = 91950519999999999999999999999.0;
    cout << std::to_string(i*2) << endl;
}

int main(){
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);  
    solve();
}