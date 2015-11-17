#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1, v2;
        int i1 = 0, i2 = 0;

        while(i1 < version1.length() || i2 < version2.length()) {
            v1 = v2 = 0;
            while(i1 < version1.length()) {
                if (version1[i1] == '.')
                {
                    i1++;
                    break;
                }
                v1 = v1 * 10 + (version1[i1] - '0');
                i1++;
            }
            while(i2 < version2.length()) {
                if (version2[i2] == '.')
                {
                    i2++;
                    break;
                }
                v2 = v2 * 10 + (version2[i2] - '0');
                i2++;
            }

            cout << v1 << ' ' << v2 << endl;
            if (v1 > v2) return 1;
            else if(v1 < v2) return -1;
        }

        return 0;
    }
};
// 提交代码结束

int main() {
    string a = "1", b = "1.0";
	Solution sol;

	// 检查结果是否正确
    cout << sol.compareVersion(a, b) << endl;

	return 0;
}