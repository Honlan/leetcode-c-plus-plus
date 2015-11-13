#include <iostream>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        result.push_back(1);

        if (rowIndex == 0) return result;
        else {
            int i = 1;
            while(i <= rowIndex) {
                vector<int> tmp;
                for (int j = 0; j <= i; ++j)
                {
                    if (j == 0 || j == i) tmp.push_back(1);
                    else tmp.push_back(result[j - 1] + result[j]);
                }
                i++;
                result = tmp;
            }

            return result;
        }
    }
};    
// 提交代码结束

int main() {
    vector<int> result;
	Solution sol;

	// 检查结果是否正确
	result = sol.getRow(5);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << ' ';
    }
    cout << endl;

	return 0;
}