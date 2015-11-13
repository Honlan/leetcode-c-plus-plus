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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        else return isOpposite(root->left, root->right);
    }

    bool isOpposite(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;
        else if ((p != NULL && q == NULL) || (p == NULL && q != NULL)) return false;
        else {
            if (p->val != q->val) return false;
            else return isOpposite(p->left, q->right) && isOpposite(p->right, q->left);
        }
    }
};  
// 提交代码结束

int main() {
    TreeNode* p = new TreeNode(1);
	Solution sol;

	// 检查结果是否正确
    cout << sol.isSymmetric(p) << endl;

	return 0;
}