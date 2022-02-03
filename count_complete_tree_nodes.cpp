#include <bits/stdc++.h>
using namespace std;

int countNodes(TreeNode *root)
{
    if (root==NULL)
    {
        return 0;
    }
    int leftcount= countNodes(root->left);
    int rightcount= countNodes(root->right);
    
    return 1+leftcount+rightcount;
}