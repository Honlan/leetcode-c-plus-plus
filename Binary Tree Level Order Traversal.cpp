#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 提交代码开始
// DFS搜索
// class Solution {
// private:
//     vector<vector<int> > result;
// public:
//     void solve(int depth, TreeNode* root) {
//         if (root == NULL) return;
        
//         if (result.size() > depth)
//         {
//             result[depth].push_back(root->val);
//         }
//         else {
//             vector<int> tmp;
//             tmp.push_back(root->val);
//             result.push_back(tmp);
//         }

//         solve(depth + 1, root->left);
//         solve(depth + 1, root->right);
//     }

//     vector<vector<int> > levelOrder(TreeNode* root) {
//         result.clear();
//         solve(0, root);
//         return result;
//     }
// };

// 借助队列实现BFS搜索
struct Node{
    int level;
    TreeNode* node;
    Node(){}
    Node(TreeNode* n, int l):node(n),level(l){}
};

class Solution {
private: 
    vector<vector<int> > result;
public:
    vector<vector<int> > levelOrder(TreeNode* root) {
        result.clear();

        if (root == NULL) return result;

        queue<Node> q;
        q.push(Node(root, 0));
        vector<int> tmp;
        int curLevel = -1;

        while(!q.empty()) {
            Node node = q.front();
            if (node.node->left) q.push(Node(node.node->left, node.level + 1));
            if (node.node->right) q.push(Node(node.node->right, node.level + 1));

            if (curLevel != node.level)
            {
                if (curLevel != -1)
                {
                    result.push_back(tmp);
                }
                tmp.clear();
                curLevel = node.level;
                tmp.push_back(node.node->val);
            }
            else {
                tmp.push_back(node.node->val);
            }

            q.pop();
        }

        result.push_back(tmp);

        return result;
    }
};
// 提交代码结束

int main() {
    TreeNode* p = new TreeNode(1);
	Solution sol;

	// 检查结果是否正确
    vector<vector<int> > result = sol.levelOrder(p);
    for (int i = 0; i < result.size(); ++i)
    {
        for (int j = 0; j < result[i].size(); ++j)
        {
            cout << result[i][j] << ' ';
        }
        cout << endl;
    }

	return 0;
}