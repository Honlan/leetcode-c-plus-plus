#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() == 0) return 0;

        int i = s.length() - 1;
        while(s[i] == ' ') {
            i--;
            if (i < 0) return 0;
        }

        int len = 0;
        while(s[i] != ' ') {
            len++;
            i--;
            if (i < 0) break;
        }
        
        return len;
    }
}; 
// 提交代码结束

int main() {
    string s = " ab ";
	Solution sol;

	// 检查结果是否正确
    cout << sol.lengthOfLastWord(s) << endl;

	return 0;
}