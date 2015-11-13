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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        else {
            int left = minDepth(root->left);
            int right = minDepth(root->right);
            if (right == 0) return left + 1;
            else if (left == 0) return right + 1;
            else return left < right ? (left + 1) : (right + 1);
        }
    }
};  
// 提交代码结束

int main() {
    TreeNode* p = new TreeNode(1);
	Solution sol;

	// 检查结果是否正确
    cout << sol.minDepth(p) << endl;

	return 0;
}