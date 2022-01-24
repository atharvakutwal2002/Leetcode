#include <bits/stdc++.h>
using namespace std;

void helper(TreeNode *&root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        TreeNode *temp;
        helper(TreeNode->root);
        helper(TreeNode->right);
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}

TreeNode *invertTree(TreeNode *root)
{

    helper(root);
    return root;
}
