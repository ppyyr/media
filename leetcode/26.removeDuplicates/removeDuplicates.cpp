#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i = 0;
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    vector<int> nums = {1, 1, 2};
    int n = sl.removeDuplicates(nums);
}