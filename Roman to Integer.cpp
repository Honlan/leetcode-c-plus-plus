#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            result += getNum(s[i]);
        }

        int pre = 0, next = getNum(s[0]);

        for (int i = 1; i < s.size(); ++i)
        {
            pre = next;
            next = getNum(s[i]);
            if ((pre * 5 == next) || (pre * 10 == next))
            {
                result -= 2 * pre;
            }
        }

        return result;
    }

    int getNum(char c)  
    {  
        switch(c)  
        {  
            case 'I':  
                return 1;  
            case 'V':  
                return 5;  
            case 'X':  
                return 10;  
            case 'L':  
                return 50;  
            case 'C':  
                return 100;  
            case 'D':  
                return 500;  
            case 'M':  
                return 1000;  
        }  
        return 0;
    }  
};  
// 提交代码结束

int main() {
    string s = "IV";
	Solution sol;

	// 检查结果是否正确
	cout << sol.romanToInt(s) << endl;

	return 0;
}