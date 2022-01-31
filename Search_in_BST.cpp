#include <bits/stdc++.h>
using namespace std;

TreeNode *searchBST(TreeNode *root, int val)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->val == val)
    {
        return root;
    }
    if (root->val > val)
    {
        return searchBST(root->left, val);
    }
    if (root->val < val)
    {
        return searchBST(root->right, val);
    }

    return NULL;
}