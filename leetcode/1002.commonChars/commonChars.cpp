#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> res;
        if(A.empty()) return res;
        int cnt[26];
        memset(cnt, 0x3f, sizeof cnt);

        for(string& s:A)
        {
            int cur_cnt[26]{0};
            for(int i = 0; i < s.size(); i++)
                cur_cnt[s[i] - 'a']++; 
            for(int i = 0; i < 26; i++)
                cnt[i] = min(cnt[i], cur_cnt[i]);
        }
        for(int i = 0; i < 26; i++)
            for(int j = 0; j < cnt[i]; j++)
            {
                string x(1, (char)'a' + i);
                res.push_back(x);
            }
        return res;
    }
};

int main(int argc, char** argv)
{
    vector<string> A = {"bella","label","roller"};
    Solution sl;
    vector<string> r = sl.commonChars(A);
}