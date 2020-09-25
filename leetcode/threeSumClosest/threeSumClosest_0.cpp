#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size(); i++) {
            int L = i + 1, R = nums.size() - 1;
            while (L < R) {
                int sum = nums[L] + nums[R] + nums[i];
                if(abs(target - sum) < abs(target - ans)) ans = sum;
                if(sum == target) return ans;
                else if(sum < target) L++;
                else R--;
            }
        }
        return ans;
    }
};

int main(int argc, char** argv) {
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    Solution sl;
    cout << sl.threeSumClosest(nums, target) << endl;
}