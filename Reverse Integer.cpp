#include <iostream>
using namespace std;

// 提交代码开始
class Solution {
public:
    int reverse(int x) {
    	const int max = 0x7fffffff;  //int最大值  
        const int min = 0x80000000;  //int最小值  
        long long sum = 0;   
          
        while(x != 0)  
        {  
            int temp = x % 10;  
            sum = sum * 10 + temp;  
            if (sum > max || sum < min) return 0;  
            x = x / 10;  
        }  

        return sum;  
    }
};
// 提交代码结束

int main() {
	int x = 312;
	Solution s;

	// 查看结果是否正确
	cout << s.reverse(x) << endl;

	return 0;
}