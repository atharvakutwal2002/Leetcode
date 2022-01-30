#include <bits/stdc++.h>
using namespace std;
bool isValidBST(TreeNode *root)
{
    if ((root->left == NULL) && (root->right == NULL))
    {
        return true;
    }
    if ((root->left->data < root->data) && (root->right->data > root->data))
    {
        return true;
    }
    else
    {
        return false;
    }

    return isValidBST(root->left) && isValidBST(root->right);
}

//===============some test cases failed for above solution ==========//

class Solution
{
public:
    bool helper(TreeNode *root, long long minV = -10000000000, long long maxV = 10000000000)
    {
        if (root == NULL)
        {
            return true;
        }
        bool left = helper(root->left, minV, root->val);
        bool right = helper(root->right, root->val, maxV);
        if (left && right && root->val > minV && root->val < maxV)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isValidBST(TreeNode *root)
    {

        return helper(root);
    }
};