class Solution{
public:
    vector<int> exchange(vector<int>& nums){
        int left = 0, right = nums.size() - 1;
        while ( left < right ){
            if((nums[left] & 1) !=  0){
                left++;
                continue;
            }
            if((nums[right] & 1) != 1){
                right--;
                continue;
            }
            swap(nums[left++], nums[right--]);
        }
        return nums;
    }
};