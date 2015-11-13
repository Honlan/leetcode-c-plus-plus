#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    int myAtoi(string str) {  
        if(str.length() == 0) return 0; 

        long long result = 0 ;  
        bool sign = true;
        int i = 0;  
  
        while(str[i] == ' ') i++;  
  
        if (str[i] == '+') i++;  
        else if (str[i] == '-')  
        {  
            sign = false;  
            i++;  
        }  
          
        for(int j = i ; j < str.length() ; j++)  
        {  
            if(str[j] >= '0' && str[j] <= '9')  
            {  
                result = result * 10 + (str[j] - '0');  
                if(result > INT_MAX)  
                    return !sign ? INT_MIN : INT_MAX;
            }  
            else break;  
        }

        if (!sign) result = -result;

        return (int)result;  
    }  
};  
// 提交代码结束

int main() {
	string s = "123456";
	Solution sol;

	// 检查结果是否正确
	cout << sol.myAtoi(s) << endl;

	return 0;
}