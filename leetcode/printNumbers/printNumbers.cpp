#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
	vector<int> printNumbers(int n) {
        // 1. method pow
        /*
		vector<int> res;
		if (n == 0) return res;
		for (int i=1,max=pow(10,n);i<max;i++)
		{
			res.push_back(i);
		}
		return res;
        */
        // 2. method pow iota
        /*
        vector<int> res(pow(10, n)-1, 0);
        iota(res.begin(), res.end(), 1);
        return res;
        */
        // 3. 
	}
};

int main(int argc, char** argv)
{
    Solution sl;
    vector<int> r = sl.printNumbers(5);
}