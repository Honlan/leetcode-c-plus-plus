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
    int maxDepth(TreeNode* root) {
        if (root == NULL)
        {
            return 0;
        }
        else {
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            return left > right ? (left + 1) : (right + 1);
        }
    }
};  
// 提交代码结束

int main() {
    TreeNode* p = new TreeNode(1);
	Solution sol;

	// 检查结果是否正确
    cout << sol.maxDepth(p) << endl;

	return 0;
}