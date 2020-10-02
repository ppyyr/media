#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return unique(nums.begin(),nums.end())-nums.begin();
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    vector<int> nums = {1, 1, 2};
    int n = sl.removeDuplicates(nums);
}