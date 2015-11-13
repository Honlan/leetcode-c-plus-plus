#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 提交代码开始
class Solution {  
public:  
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {  
        ListNode * head = new ListNode(0);  
        ListNode * ptr = head;  
          
        while(l1 != NULL || l2 != NULL){  
            ListNode * cur = NULL;  
            if(l1 == NULL){  
                cur = l2;  
                l2 = l2->next;  
            }  
            else if(l2 == NULL){  
                cur = l1;  
                l1 = l1->next;  
            }  
            else{  
                if(l1->val < l2->val){  
                    cur = l1;  
                    l1 = l1->next;  
                }  
                else{  
                    cur = l2;  
                    l2 = l2->next;  
                }  
            }  
            ptr->next = cur;  
            ptr = ptr->next;  
        }  
          
        return head->next;  
    }  
};  
// 提交代码结束

int main() {
    ListNode* a = new ListNode(1);
    ListNode* tmp = a;
    tmp->next = new ListNode(5);
    tmp = tmp->next;
    tmp->next = new ListNode(9);

    ListNode* b = new ListNode(2);
    tmp = b;
    tmp->next = new ListNode(8);
    tmp = tmp->next;
    tmp->next = new ListNode(12);
    
	Solution sol;

	// 检查结果是否正确
    a = sol.mergeTwoLists(a, b);
    while(a != NULL) {
        cout << a->val << ' ';
        a = a->next;
    }
    cout << endl;

	return 0;
}