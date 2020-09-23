#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size() - 1;
        int max = 0, area;
        for(int i = 0; i < size; i++)
        {
            int j = size;
            for(; j > i; j--)
            {
                area = (j - i) * std::min(height.at(i), height.at(j));
                max = max > area ? max : area;
            }
        }
        return max;
    }
};

int main(int argc, char* argv[])
{
    int temp[] = {1,8,6,2,5,4,8,3,7};
    Solution sl;
    vector<int> height(temp, temp + 9);
    cout << sl.maxArea(height) << endl;
}