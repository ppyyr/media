#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
                nums[k++] = nums[i];
        }
        return k;
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    vector<int> nums = {3, 2, 2, 3};
    int val = 2;
    int n = sl.removeElement(nums, val);
}