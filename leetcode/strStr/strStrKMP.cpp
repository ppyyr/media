#include <cstdio>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle.size()) return 0;
        if(!haystack.size()) return -1;
        //先构造pattern
        int j = -1, i = 0;//j在后面，i在前面
        vector<int> b(needle.size() + 1);
        b[i] = j;
        cout << "b[0]:" << b[0];
        while(i < needle.size())
        {
            cout << setw(4) << "j:" << j << setw(4) << "i:" << i << endl;
            while(j >= 0 && needle[i] != needle[j]) j = b[j];
            i++, j++;
            b[i] = j;
            cout << "b[" << i << "]: " << b[i];
        }
        cout << endl;
        j = 0, i = 0; //j这回是text的， i是pattern的
        while(j < haystack.size())
        {
            cout << "j:" << j << setw(4) << "i:" << i << endl;
            while(i >= 0 && needle[i] != haystack[j]) i = b[i];
            i++, j++;
            if(i == needle.size())
            {
                return j - needle.size();
            }
        }
        return -1;
    }
};

int main (int argc, char* argv[]){
    string needle = "aabaaf";
    string haystack = "aabaabaaf";
    Solution sl;
    cout << sl.strStr(haystack, needle) << endl;
}

