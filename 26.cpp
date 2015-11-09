#include <iostream>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) return nums.size();
        else {
            int len = 1;
            int num = nums[0];
            vector<int>::iterator it = nums.begin();
            for (it++; it != nums.end();)
            {
                if (*it == num) 
                {
                    nums.erase(it);
                    continue;
                }
                else 
                {
                    num = *it;
                    it++;
                    len++;
                }
            }

            return len;
        }
    } 
};  
// 提交代码结束

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
	Solution sol;

	// 检查结果是否正确
    cout << sol.removeDuplicates(nums) << endl;

	return 0;
}