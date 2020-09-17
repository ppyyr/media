class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> o;
        int n = s.size();
        int rk = -1, ans = 0;
        for (int i = 0; i < n; i++) {
            if(i != 0) {
                o.erase(s[i-1]);
            }
            while(rk + 1 < n && !o.count(s[rk+1])) {
                o.insert(s[rk+1]);
                rk++;
            }
            ans = max(ans, rk - i + 1);

        }
        return ans;
    }
};
