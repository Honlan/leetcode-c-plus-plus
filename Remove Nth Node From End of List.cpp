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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp = head;
        int listLength = 1;
        while(tmp->next != NULL) {
            tmp = tmp->next;
            listLength += 1;
        }

        tmp = head;
        int count = listLength - n - 1;

        if (count < 0) return head->next;

        while(count--) {
            tmp = tmp->next;
        }
        tmp->next = (tmp->next)->next;

        return head;
    }
};  
// 提交代码结束

int main() {
    ListNode* a = new ListNode(1);
    ListNode* tmp = a;
    tmp->next = new ListNode(2);
    tmp = tmp->next;
    tmp->next = new ListNode(3);
    tmp = tmp->next;
    tmp->next = new ListNode(4);
    tmp = tmp->next;
    tmp->next = new ListNode(5);
    
	Solution sol;

	// 检查结果是否正确
    a = sol.removeNthFromEnd(a, 2);
    while(a != NULL) {
        cout << a->val << ' ';
        a = a->next;
    }
	cout << endl;

	return 0;
}