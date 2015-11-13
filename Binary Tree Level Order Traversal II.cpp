#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 提交代码开始
class Solution {  
private:
    vector<vector<int> > result;
public:  
    void solve(TreeNode* t, int depth) {
        if (t == NULL) return;
        else {
            if (result.size() == depth)
            {
                vector<int> tmp;
                tmp.push_back(t->val);
                result.push_back(tmp);
            }
            else {
                result[depth].push_back(t->val);
            }

            solve(t->left, depth + 1);
            solve(t->right, depth + 1);
        }
    }

    vector<vector<int> > levelOrderBottom(TreeNode* root) {
        result.clear();

        solve(root, 0);

        reverse(result.begin(), result.end());

        return result;
    }
};  
// 提交代码结束

int main() {
    TreeNode* p = new TreeNode(1);
	Solution sol;

	// 检查结果是否正确
    vector<vector<int> > result = sol.levelOrderBottom(p);
    for (int i = 0; i < result.size(); ++i)
    {
        for (int j = 0; j < result[i].size(); ++j)
        {
            cout << result[i][j] << ' ';
        }
    }
    cout << endl;

	return 0;
}