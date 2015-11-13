#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {
public:
	bool isPalindrome(string s) {
		string formart = "";
		for (int i = 0; i < s.length(); ++i)
		{
			char tmp = s[i];
			if (tmp >= 'A' && tmp <= 'Z') formart += tmp;
			else if (tmp >= 'a' && tmp <= 'z') formart += (tmp - 32);
			else if (tmp >= '0' && tmp <= '9') formart += tmp;
		}

		for (int i = 0; i <= formart.length() / 2; ++i)
		{
			if (formart[i] != formart[formart.length() - 1 - i]) return false;
		}

		return true;
    }
};
// 提交代码结束

int main() {
	string str = "A man, a plan, a canal: Panama";
	Solution s;

	// 查看结果是否正确
	cout << s.isPalindrome(str) << endl;

	return 0;
}