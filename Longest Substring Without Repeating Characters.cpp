#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.length() == 0)
		{
			return 0;
		}

		int N = s.length();
		int maxLength = 1;

		for (int i = 0; i + maxLength < N; ++i)
		{
			int len = 1;
			string result = s.substr(i, 1);
			int j = i + 1;

			while(j < N) {
				if (result.find(s.substr(j, 1)) == -1)
				{
					len++;
					result += s.substr(j, 1);
					j++;
					if (len > maxLength) maxLength = len;
				}
				else {
					break;
				}
			}
		}

		return maxLength;
	}
};
// 提交代码结束

int main(){
	string s = "abcabcbb";
	Solution sol;

	// 查看结果是否正确
	cout << sol.lengthOfLongestSubstring(s) << endl;
	
	return 0;
}