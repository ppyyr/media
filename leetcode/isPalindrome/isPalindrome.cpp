#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int i = 0;
        vector<int> n;
        if(x < 0)
            return false;
        else if(x < 10)
            return true;
        while(x) 
        {
            n.push_back(x%10);
            x/=10;
            i++;
        }
        for(int j=0;j<i+1/2;j++)
        {
            if(n.at(j) != n.at(--i)) return false;
        }
        return true;
    }
};

int main(int argc, char* argv[])
{
    Solution sl;
    cout << sl.isPalindrome(121) << endl;
}