#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 先对数组排序
        sort(nums.begin(), nums.end());
        // 左右指针
        int lo = 0, hi = nums.size() - 1;
        while (lo < hi) {
            int sum = nums[lo] + nums[hi];
            // 根据 sum 和 target 的比较，移动左右指针
            if (sum < target) {
                lo++;
            } else if (sum > target) {
                hi--;
            } else if (sum == target) {
                return {nums[lo], nums[hi]};
            }
        }
        return {};
    }
};

int main(int argc, char** argv)
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution sl;
    vector<int> result = sl.twoSum(nums, target);
    cout << "result: " << result[0] << " " << result[1] << endl;
}
