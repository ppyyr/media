#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        if(x/10 == 0) return x; //平凡情况：若x∈[-9,9]，则直接返回其本身
        int y = 0;
        while(x) {
            if(y > INT_MAX/10 || y < INT_MIN/10) //溢出
                return 0;
            y *= 10;
            y += x%10; //取出x的个位，存入y中对称的位置
            x /= 10;   //去掉x的个位
        }
        return y;
    }
};

int main(int argc, char* argv[]){
    int x = INT_MIN;
    Solution sl;
    x = sl.reverse(x);
    cout << x << endl;
}