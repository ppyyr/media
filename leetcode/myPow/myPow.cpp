#include <iostream>

using namespace std;

class Solution {
public:
    //快速幂
    double myPow(double x, int n) {
        double res = 1.0;
        if( n == 0 || x == 1.0 ) return 1;
        if( x == 0.0 && n < 0) return x;
        long i = n;
        if ( n < 0 )
        {
            x = 1/x;
            i = -i;
        }
        
        while(i){
            if( i & 1 ) res *= x;
            x *= x;
            i >>= 1;
        }
        return res;
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    double r = sl.myPow(2, -2147483648);
}