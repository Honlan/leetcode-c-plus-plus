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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int full = 0;
		ListNode* result = new ListNode(0);
		ListNode* ptr = result;
		while(l1 != NULL || l2 != NULL) {
			int val1 = 0;
			if (l1 != NULL)
			{
				val1 = l1->val;
				l1 = l1->next;
			}
			int val2 = 0;
			if (l2 != NULL)
			{
				val2 = l2->val;
				l2 = l2->next;
			}
			int sum = val1 + val2 + full;
			ptr->next = new ListNode(sum % 10);
			ptr = ptr->next;
			full = sum / 10; 
		}
		if (full)
		{
			ptr->next = new ListNode(1);
		}
		return result->next;
	}
};
// 提交代码结束

int main() {
	ListNode* a = new ListNode(2);
	ListNode* tmp = a;
	tmp->next = new ListNode(4);
	tmp = tmp->next;
	tmp->next = new ListNode(3);

	ListNode* b = new ListNode(5);
	tmp = b;
	tmp->next = new ListNode(6);
	tmp = tmp->next;
	tmp->next = new ListNode(4);

	Solution s;
	ListNode* result = s.addTwoNumbers(a, b);

	// 查看结果是否正确
	while(result != NULL) {
		cout << result->val << ' ';
		result = result->next;
	}
	cout << endl;

	return 0;
}