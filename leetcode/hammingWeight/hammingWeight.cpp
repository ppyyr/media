#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        // 1. function call
        /*
        bitset<32> b(n);
        // string s = b.to_string();
        return b.count();
        */
       // 2. faster
       int c = 0;
       while (n != 0)
       {
           c++;
           n = n & (n - 1);
       }
       return c;
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    int r = sl.hammingWeight(70);
}
