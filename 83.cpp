#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 提交代码开始
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> digits;
        ListNode* ptr = head;
        while(ptr != NULL) {
            int val = ptr->val;
            if (find(digits.begin(), digits.end(), val) == digits.end()) digits.push_back(val);
            ptr = ptr->next;
        }

        ListNode* result = new ListNode(0);
        ptr = result;

        for (int i = 0; i < digits.size(); ++i)
        {
            ListNode* tmp = new ListNode(digits[i]);
            ptr->next = tmp;
            ptr = ptr->next;
        }

        return result->next;
    }
}; 
// 提交代码结束

int main() {
    ListNode* head = new ListNode(1);
    ListNode* tmp = head;
    tmp->next = new ListNode(1);
    tmp = tmp->next;
    tmp->next = new ListNode(2);
    tmp = tmp->next;
    tmp->next = new ListNode(3);
    tmp = tmp->next;
    tmp->next = new ListNode(3);
	Solution sol;

	// 检查结果是否正确
    head = sol.deleteDuplicates(head);
    while(head != NULL) {
        cout << head->val << ' ';
        head =  head->next;
    }
    cout << endl;

	return 0;
}