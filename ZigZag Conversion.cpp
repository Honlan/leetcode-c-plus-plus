#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {
public:
    string convert(string s, int numRows) {
    	if (numRows == 1) return s;

    	else {
    		string result = "";

    		for (int i = 0; i < numRows; ++i)
    		{
    			// 处理第一行
    			if (i == 0)
    			{
    				int j = i;
    				while(j < s.length()) {
    					result += s.substr(j, 1);
    					j += 2 * (numRows - 1);
    				}
    			}

    			// 处理最后一行
    			else if (i == numRows - 1) {
    				int j = i;
    				while (j < s.length()) {
    					result += s.substr(j, 1);
    					j += 2 * (numRows - 1);
    				}
    			}

    			// 处理中间行
    			else {
    				bool flag = true;
    				int j = i;
    				while (j < s.length()) {
    					result += s.substr(j, 1);
    					// 奇数列
    					if (flag)
    					{
    						j += 2 * (numRows - 1 - i);
    						flag = !flag;
    					} 
    					// 偶数列
    					else 
    					{
    						j += 2 * i;
    						flag = !flag;
    					}
    				} 
    			}
    		}

    		return result;
    	}
    }
};
// 提交代码结束

int main() {
	string s = "PAYPALISHIRING";
	Solution sol;

	// 查看结果是否正确
	cout << sol.convert(s, 3) << endl;

	return 0;
}