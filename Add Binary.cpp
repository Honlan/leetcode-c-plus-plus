#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {
public:
    string addBinary(string a, string b) {
        int i = 1;
        int Na = a.length();
        int Nb = b.length();
        int carry = 0;
        string result = "";
        vector<int> digits;

        while (i <= Na || i <= Nb) {
            int ia = 0;
            if (i <= Na) ia = a[Na - i] - '0';
            int ib = 0;
            if (i <= Nb) ib = b[Nb - i] - '0';
            int sum = ia + ib + carry;
            if (sum >= 2)
            {
                sum -= 2;
                carry = 1;
            } else {
                carry = 0;
            }
            digits.push_back(sum);
            i++;
        }

        if (carry == 1) digits.push_back(1);

        for (int i = digits.size() - 1; i >= 0; --i) result += ('0' + digits[i]);

        return result;
    }
}; 
// 提交代码结束

int main() {
    string a = "1010", b = "1011";
	Solution sol;

	// 检查结果是否正确
    cout << sol.addBinary(a, b) << endl;

	return 0;
}