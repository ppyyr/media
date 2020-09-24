#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m = {{'I',1}, {'V',5}, {'X',10},{'L',50},{'C',100}, {'D',500},{'M',1000}};
        int sum = 0;                
        for(int i = 0 ; i < s.size(); i++)
            m[s[i]] < m[s[i+1]] ?   sum -= m[s[i]]:   sum += m[s[i]];
        return sum;
    }
};

int main(int argc, char** argv)
{
    Solution sl;
    cout << sl.romanToInt("MCMXCIV") << endl;
}