#include <iostream>

using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor)
    {
        //特殊处理
        if (divisor == -1) 
        {
            if(dividend == INT_MIN)
                return INT_MAX; 
            else
                return -dividend;
        }
        if(dividend == 0) return 0;
        if(divisor == 1) return dividend;

        //可能会越界所以转为负数
        int sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;
        int a = dividend > 0 ? -dividend : dividend;
        int b = divisor > 0 ? -divisor : divisor;
        if(a > b) return 0;
        int res = div(a, b);
        return sign == -1? -res : res;
            
    }
    int div(int a, int b)
    {
        if(a > b) return 0;
        int count = 1;
        int tb = b;
        while (tb - a + tb >= 0 && tb + tb < 0)
        {
            tb += tb;
            count += count;
        }
        return count + div(a - tb, b);
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    int r = sl.divide(INT_MIN, 2);
}