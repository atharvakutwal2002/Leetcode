#include <bits/stdc++.h>
using namespace std;

bool isLeftLeaf(TreeNode *root)
{
    if (root == NULL)
    {
        return false;
    }
    if ((root->left == NULL) && (root->right == NULL))
    {
        return true;
    }
    return false;
}

int sumOfLeftLeaves(TreeNode *root)
{
    int ans=0;
    if (root != NULL)
    {
        if (isLeftLeaf(root->left))
        {
            ans += root->left->val;
        }
        else
        {
            ans+=sumOfLeftLeaves(root->left);
        }
        ans += sumOfLeftLeaves(root->right);
    }

    return ans;
}