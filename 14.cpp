#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        else if (strs.size() == 1) return strs[0];
        else {
            int minIndex = 0;
            int minLength = INT_MAX;
            for (int i = 0; i < strs.size(); ++i)
            {
                if (strs[i].length() < minLength)
                {
                    minLength = strs[i].length();
                    minIndex = i;
                }
            }

            string minS = strs[minIndex];
            string result = "";

            for (int i = 0; i < minS.length(); ++i)
            {
                string c = minS.substr(i, 1);
                bool same = true;
                for (int j = 0; j < strs.size(); ++j)
                {
                    string t = strs[j].substr(i, 1);
                    if (c != t)
                    {
                        same = false;
                        break;
                    }
                }

                if (same) result += c;
                else break;
            }

            return result;
        }
    }
};  
// 提交代码结束

int main() {
    vector<string> strs;
    strs.push_back("abcdefg");
    strs.push_back("abcdccd");
    strs.push_back("abcdcce");
	Solution sol;

	// 检查结果是否正确
	cout << sol.longestCommonPrefix(strs) << endl;

	return 0;
}