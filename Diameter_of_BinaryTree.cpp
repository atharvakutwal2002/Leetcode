#include <bits/stdc++.h>
using namespace std;

int count(TreeNode *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftTree = count(root->left, ans);
    int rightTree = count(root->right, ans);
    ans = max(ans, leftTree + rightTree);
    return 1 + max(leftTree, rightTree);
}
int diameterOfBinaryTree(TreeNode *root)
{
    int ans = 0;
    count(root, ans);
    return ans;
}