#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 提交代码开始
class Solution {  
public:  
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;
        else if ((p != NULL && q == NULL) || (p == NULL && q != NULL)) return false;
        else {
            if (p->val != q->val) return false;
            else return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
};  
// 提交代码结束

int main() {
    TreeNode* p = new TreeNode(1);
    TreeNode* q = new TreeNode(1);
	Solution sol;

	// 检查结果是否正确
    cout << sol.isSameTree(p, q) << endl;

	return 0;
}