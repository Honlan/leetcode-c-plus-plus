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
    int maxDepth(TreeNode* t) {
        if (t == NULL)
        {
            return 0;
        }
        else {
            int left = maxDepth(t->left);
            int right = maxDepth(t->right);
            return left > right ? (left + 1) : (right + 1);
        }
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        else {
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            int error = left - right;
            bool flag = false;

            if (error < 2 && error > -2) flag = true;
            if (flag && isBalanced(root->left) && isBalanced(root->right)) return true;
            else return false;
        }
    }
};  
// 提交代码结束

int main() {
    TreeNode* p = new TreeNode(1);
	Solution sol;

	// 检查结果是否正确
    cout << sol.isBalanced(p) << endl;

	return 0;
}