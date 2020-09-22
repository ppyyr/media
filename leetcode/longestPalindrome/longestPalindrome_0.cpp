#include <vector>
#include <iostream>

using namespace::std;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==1) return s;//大小为1的字符串必为回文串
        string rev=s;//rev存放s反转结果
        string res;//存放结果
        std::reverse(rev.begin(),rev.end());
        if(rev==s) return s;
        int len=0;//存放回文子串的长度
        for(int i=0;i<s.length();i++)//查找s与rev的最长公共子串
        {
            string temp;//存放待验证子串
            for(int j=i;j<s.length();j++)
            {
                temp+=s[j]; //效率比直接+高很多
                if(len>=temp.length())
                    continue;
                else if(rev.find(temp)!=-1)//在rev中找到temp
                {
                    string q=temp;//q用来验证temp是否是回文子串
                    std::reverse(q.begin(),q.end());
                    if(q==temp)
                    {
                        len=temp.length();
                        res=temp;
                    }
                }
                else break;
            }
            temp="";
        }
        return res;
    }
};

int main(int argc, char* argv[])
{
    string s = "ababad";
    Solution sl;
    cout << sl.longestPalindrome(s) << endl;
}