#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long result(0); //利用long避免溢出
        if (x == INT_MIN)
        {
            return 0;
        }
        if (x < 0)
        {
            return -reverse(-x);
        }

        int digit(0);
        while (x > 0)
        {
            digit = x % 10;
            x /= 10;
            result = result * 10 + digit;
        }

        if (result > INT_MAX)
        {
            return 0;
        }
        return int(result);
    }
};

int main(int argc, char* argv[]){
    int x = -321;
    Solution sl;
    x = sl.reverse(x);
    cout << x << endl;
}