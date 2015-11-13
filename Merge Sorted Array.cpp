#include <iostream>
#include <vector>
using namespace std;

// 提交代码开始
class Solution {  
public:  
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = m + n - 1, index1 = m - 1, index2 = n - 1;
        while(index1 >= 0 && index2 >= 0) {
            if (nums1[index1] > nums2[index2])
            {
                nums1[index--] = nums1[index1--];
            }
            else {
                nums1[index--] = nums2[index2--];
            }
        }

        while(index1 >= 0) {
            nums1[index--] = nums1[index1--];
        }

        while(index2 >= 0) {
            nums1[index--] = nums2[index2--];
        }
    }
};  
// 提交代码结束

int main() {
    vector<int> nums1, nums2;
    vector<int>& rnums1 = nums1;
    vector<int>& rnums2 = nums2;
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(9);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
	Solution sol;

	// 检查结果是否正确
    sol.merge(rnums1, 3, rnums2, 3);
    for (int i = 0; i < nums1.size(); ++i)
    {
        cout << nums1[i] << ' ';
    }
	cout << endl;

	return 0;
}