class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int size = nums.size();
        bool flag[size];
        memset(flag,false,sizeof(flag));
        for (int i=0;i<size;i++){
            if(flag[nums.at(i)])
                return nums.at(i);
            else
                flag[nums.at(i)]=true;
        }
        return -1;
    }
};
