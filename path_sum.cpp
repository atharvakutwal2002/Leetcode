#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (root == NULL)
        {
            return false;
        }
        if ((root->left == NULL) && (root->right == NULL) && (targetSum - root->val == 0))
        {
            return true;
        }
        return (hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val));
    }
};
