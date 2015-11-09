#include <iostream>
#include <string>
using namespace std;

// 提交代码开始
class Solution {
public:
    string revolution(string s)
    {
        string ret;
        char pre = s[0];
        int count = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i] == pre)
            {
                count++;
            } 
            else
            {    
                char tmp = count + '0';
                ret = ret + tmp + pre;
                pre = s[i];
                count = 1;
            }
        }
        char tmp = count + '0';
        ret = ret + tmp + pre;
        return ret;
    }

    string countAndSay(int n) {
        string ret = "1";
        while(--n){
            ret = revolution(ret);
        }
        return ret;
    }
}; 
// 提交代码结束

int main() {
    int n = 10;
	Solution sol;

	// 检查结果是否正确
    cout << sol.countAndSay(n) << endl;

	return 0;
}