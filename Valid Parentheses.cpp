#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    bool isValid(string s) {
        string result = "";
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
            {
                result += s[i];
            } else {
                if (result.length() == 0) return false;
                
                if (s[i] == ')' && result.at(result.length() - 1) == '(')
                {
                    result = result.substr(0, result.length() - 1);
                } 
                else if (s[i] == ']' && result.at(result.length() - 1) == '[')
                {
                    result = result.substr(0, result.length() - 1);
                }
                else if (s[i] == '}' && result.at(result.length() - 1) == '{')
                {
                    result = result.substr(0, result.length() - 1);
                }
                else return false;
            }
        }

        if (result == "") return true;
        else return false;
    }
};  
// 提交代码结束

int main() {
    string s = "(){[]}";
	Solution sol;

	// 检查结果是否正确
    cout << sol.isValid(s) << endl;

	return 0;
}