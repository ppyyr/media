#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
/*1.为空，res = ""，不为空，res = strs[0];
 *2.开始遍历
 *3.s.find(res) != 0不是其前缀，开始减去res的最后一个字符
 */
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs.empty() ? "" : strs[0]; 
        for (string s : strs) 
            while (s.find(res) != 0) res = res.substr(0, res.length() - 1);
        return res;
    }
};

int main(int argc, char** argv)
{
    vector<string> strs = {"flower","flow","flight"};
    Solution sl;
    cout << "result: " << sl.longestCommonPrefix(strs) << endl;
}
