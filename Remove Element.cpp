#include <iostream>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it = nums.begin();
        for (; it != nums.end();)
        {
            if (*it == val)
            {
                nums.erase(it);
            }
            else 
            {
                it++;
            }
        }

        return nums.size();
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
    cout << sol.removeElement(nums, 2) << endl;

	return 0;
}