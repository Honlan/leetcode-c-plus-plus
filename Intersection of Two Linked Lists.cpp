#include <iostream>
#include <string>
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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* tmpA = headA;
        ListNode* tmpB = headB;
        int lengthA, lengthB;
        lengthA = lengthB = 0;
        
        tmpA = headA;
        tmpB = headB;
        while(tmpA != NULL) {
            tmpA = tmpA->next;
            lengthA++;
        }
        while(tmpB != NULL) {
            tmpB = tmpB->next;
            lengthB++;
        }
        
        int step;
        if (lengthA > lengthB) {
            tmpA = headA;
            tmpB = headB;
            step = lengthA - lengthB;
        }
        else {
            tmpA = headB;
            tmpB = headA;
            step = lengthB - lengthA;
        }

        while(step--) {
            tmpA = tmpA->next;
        }
        while(tmpA != NULL && tmpB != NULL){
            if (tmpA == tmpB) return tmpA;
            else {
                tmpA = tmpA->next;
                tmpB = tmpB->next;
            }
        }

        return NULL;
    }
}; 
// 提交代码结束

int main() {
    ListNode* headA = new ListNode(1);
    ListNode* headB = headA;
	Solution sol;

	// 检查结果是否正确
    headA = sol.getIntersectionNode(headA, headB);
    cout << headA->val << endl;

	return 0;
}