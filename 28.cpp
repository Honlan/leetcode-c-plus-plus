#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    int strStr(string haystack, string needle) {
        int N = haystack.length(), n = needle.length();
        for (int i = 0; i < N - n + 1; ++i)
        {
            bool find = true;
            for (int j = 0; j < n; ++j)
            {
                if (haystack[i + j] != needle[j])
                {
                    find = false;
                    break;
                }
            }

            if (find) return i;
        }

        return -1;
    }
};  
// 提交代码结束

int main() {
    string haystack = "mississippi", needle = "mississippi";
	Solution sol;

	// 检查结果是否正确
    cout << sol.strStr(haystack, needle) << endl;

	return 0;
}