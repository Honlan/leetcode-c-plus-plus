#include <iostream>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size() - 1] != 9)
        {
            digits[digits.size() - 1] += 1;
            return digits;
        } 
        else {
            digits[digits.size() - 1] = 0;
            bool flag = true;
            int i = digits.size() - 1;
            while(--i >= 0) {
                if (digits[i] != 9)
                {
                    digits[i] += 1;
                    flag = false;
                    break;
                } else {
                    digits[i] = 0;
                }
            }

            if (flag) digits.insert(digits.begin(), 1);

            return digits;
        }
    }
}; 
// 提交代码结束

int main() {
    vector<int> digits;
    digits.push_back(9);
    digits.push_back(9);
    digits.push_back(9);
	Solution sol;

	// 检查结果是否正确
    digits = sol.plusOne(digits);
    for (int i = 0; i < digits.size(); ++i)
    {
        cout << digits[i] << ' ';
    }
    cout << endl;

	return 0;
}