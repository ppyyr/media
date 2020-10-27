#include <iostream>

using namespace std;

// The fast and slow pointer is used to judge the loop
class Solution {
public:
    int bitSquareSum(int n)
    {
        int sum = 0;
        while(n)
        {
            int bit = n % 10;
            sum += bit * bit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n, fast = n;
        do {
            slow = bitSquareSum(slow);
            fast = bitSquareSum(fast);
            fast = bitSquareSum(fast);
        }while( slow != fast);
        return slow == 1;
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    bool r = sl.isHappy(1222);
}