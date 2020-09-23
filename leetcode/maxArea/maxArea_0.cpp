#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0, R = height.size() - 1;
        int ans = 0;
        while (L < R)
        {
            int area = min(height.at(L), height.at(R)) * (R - L);
            ans = max(ans, area);
            if(height.at(L) > height.at(R))
            {
                R--;
            }else
            {
                L++;
            }
            
        }
        return ans;
    }
};

int main(int argc, char* argv[])
{
    int temp[] = {1,8,6,2,5,4,8,3,7};
    Solution sl;
    vector<int> height(temp, temp + 9);
    cout << sl.maxArea(height) << endl;
}