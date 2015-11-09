#include <iostream>
#include <string>
#include <vector>
using namespace std;

int stairs[999] = {0};

// 提交代码开始
class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        else if (n == 2) return 2;
        else if (stairs[n] != 0) return stairs[n];
        else {
            stairs[n] = climbStairs(n - 1) + climbStairs(n - 2);
            return stairs[n];
        }
    }
}; 
// 提交代码结束

int main() {
    int n = 2;
	Solution sol;

	// 检查结果是否正确
    cout << sol.climbStairs(n) << endl;

	return 0;
}