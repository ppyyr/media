#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        // 1. violence method
        /*
        for (int i = 1; i < nums.size(); i ++) 
            if(nums[i -1] > nums[i]) return nums[i];
        return nums[0];
        */

        // 2. Binary search
        int l = 0, r = nums.size() - 1;
        while(l < r)
        {
            int mid = (l + r) >> 1;
            if(nums[mid] < nums[r]) r = mid;
            else if(nums[mid] > nums[r]) l = mid + 1;
            else r--;
        }
        return nums[l];

        // 3. Pinch criterion
        /*
        int l = 0, r = nums.size() - 1;
        while(l < r)
        {
            int mid = (l + r) >> 1;
            if(nums[mid] <= nums[r]) r--;
            else l++;
        }
        return nums[l];
        */

        // 4. Traverse left to right
        /*
        for (int i = 1; i < nums.size(); i ++) 
            if(nums[i -1] > nums[i]) return nums[i];
        return nums[0];
        */
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    vector<int> nums = {3, 4, 5, 1, 2};
    int r = sl.findMin(nums);
}
