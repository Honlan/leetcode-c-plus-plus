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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) return false;
        else {
            if (root->left == NULL && root->right == NULL && root->val == sum) return true;
            if (root->left && hasPathSum(root->left, sum - root->val)) return true;
            if (root->right && hasPathSum(root->right, sum - root->val)) return true;
            return false;
        }
    }
};    
// 提交代码结束

int main() {
    TreeNode* p;
	Solution sol;

	// 检查结果是否正确
    cout << sol.hasPathSum(p, 0) << endl;

	return 0;
}