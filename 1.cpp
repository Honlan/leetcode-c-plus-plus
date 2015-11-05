#include <iostream>
#include <map>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int i, sum;  
        vector<int> results;  
        map<int, int> hmap;  

        for(i = 0; i < nums.size(); i++){  
            if(!hmap.count(nums[i])){  
                hmap.insert(pair<int, int> (nums[i], i));  
            }  

            if(hmap.count(target - nums[i])){  
                int n = hmap[target - nums[i]];

                if(n < i){  
                    results.push_back(n + 1);  
                    results.push_back(i + 1);   
                    return results;  
                }  
  
            }  
        }  

        return results; 
	} 
};
// 提交代码结束

int main() {
	int a[4] = {2, 7, 11, 15};
	vector<int> nums(a, a + 4);
	Solution s;
	nums = s.twoSum(nums, 9);

	// 查看结果是否正确
	for (int i = 0; i < nums.size(); ++i)
	{
		cout << nums[i] << ' ';
	}
	cout << endl;
	
	return 0;
}