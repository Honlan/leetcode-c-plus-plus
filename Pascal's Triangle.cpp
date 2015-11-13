#include <iostream>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {  
private:
	vector<vector<int> > result;
public:  
	vector<vector<int> > generate(int numRows) {
        result.clear();
        if (numRows == 0) return result;

        vector<int> tmp;
        tmp.push_back(1);
        result.push_back(tmp);

        for (int i = 1; i < numRows; ++i)
        {
        	vector<int> tmp;
        	for (int j = 0; j <= i; ++j)
        	{
                if (j == 0 || j == i) tmp.push_back(1);
                else tmp.push_back(result[i - 1][j] + result[i - 1][j - 1]);
        	}
        	result.push_back(tmp);
        }

        return result;
    }
};    
// 提交代码结束

int main() {
    vector<vector<int> > result;
	Solution sol;

	// 检查结果是否正确
	result = sol.generate(5);
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