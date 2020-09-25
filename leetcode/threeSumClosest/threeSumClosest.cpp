#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int mindis, ans;
        mindis = abs(nums[0] + nums[1] + nums[2] - target);
        ans = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                for(int k = nums.size() -1; j < k; k--) {
                    if(abs(nums[i] + nums[j] + nums[k] - target) < mindis)
                        ans = nums[i] + nums[j] + nums[k];
                        mindis = abs(ans - target);
                }
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