#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int m[90] = {};
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int sum = 0;
        for(int i = 0; i < s.size(); i++)
            m[s[i]] < m[s[i+1]] ? sum -= m[s[i]] : sum += m[s[i]];
        return sum;
    }
};

int main(int argc, char** argv)
{
    cout << static_cast<unsigned>('A') << endl;
    Solution sl;
    cout << sl.romanToInt("MCMXCIV") << endl;
}