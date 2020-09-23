#include <iostream>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int i = 0,revertedNumber = 0;
        if(x < 0 || (x%10 == 0 && x != 0))
            return false;
        while(x > revertedNumber) 
        {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }
        return x == revertedNumber || x == revertedNumber / 10;
    }
};

int main(int argc, char* argv[])
{
    Solution sl;
    cout << sl.isPalindrome(121) << endl;
}