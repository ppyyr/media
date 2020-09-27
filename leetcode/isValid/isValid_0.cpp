#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char ch : s){
            if(ch == '('){
                stk.push(')');
                continue;
            }else if(ch == '['){
                stk.push(']');
                continue;
            }else if(ch == '{'){
                stk.push('}');
                continue;
            }else
            {
                if(stk.empty() || stk.top() != ch)
                    return false;
                else
                    stk.pop();
            }
        }
    return stk.empty();
    }
};

int main(int argc, char** argv)
{
    string s = "(({{}}))";
    Solution sl;
    cout << sl.isValid(s) <<endl;
}