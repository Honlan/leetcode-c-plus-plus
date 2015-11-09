#include <iostream>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;

        int base = 1;
        while (x / base >= 10) base *= 10;

        while (x > 0) {
            int leftDigit = x / base;
            int rightDigit = x % 10;
            if (leftDigit != rightDigit) return false;
            else {
                x = (x - base * leftDigit) / 10;
                base /= 100;
            }
        }

        return true;   
    }
};  
// 提交代码结束

int main() {
    int num = 178959871;
	Solution sol;

	// 检查结果是否正确
	cout << sol.isPalindrome(num) << endl;

	return 0;
}