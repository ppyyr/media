
#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //递归分治
        return recursionBuild(preorder.begin(),preorder.end(),inorder.begin(),inorder.end());
    }

    //递归分治
    TreeNode* recursionBuild(vector<int>::iterator preBegin, vector<int>::iterator preEnd,vector<int>::iterator inBegin, vector<int>::iterator inEnd )
    {
        if(inEnd==inBegin) return NULL;
        TreeNode* cur = new TreeNode(*preBegin);
        auto root = find(inBegin,inEnd,*preBegin);
        cur->left = recursionBuild(preBegin+1,preBegin+1+(root-inBegin),inBegin,root);
        cur->right = recursionBuild(preBegin+1+(root-inBegin),preEnd,root+1,inEnd);
        return cur;
    }
};

int main(int argc, char** argv)
{
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    Solution sl;
    TreeNode* t = sl.buildTree(preorder, inorder);
}