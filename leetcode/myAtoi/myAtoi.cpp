#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        int i = 0, flag = 1;
        int res = 0; //默认flag = 1，正数
        while (str[i] == ' ') i ++;
        if (str[i] == '-') flag = -1;
        if (str[i] == '-' || str[i] == '+') i ++;
        for (; i < str.size() && isdigit(str[i]); i ++)  {
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && str[i] - '0' > 7)) //溢出判定
                return flag == 1 ? INT_MAX : INT_MIN;
            res = res * 10 + (str[i] - '0');
        } 
        return flag * res;
    }
};

int main(int argc, char* argv[])
{
    string str = "-1234564 to me";
    Solution sl;
    cout << sl.myAtoi(str) << endl;
}