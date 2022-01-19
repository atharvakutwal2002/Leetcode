#include <bits/stdc++.h>
using namespace std;

Treenode *helper(vector<int> &arr, int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    int rootData = arr[mid];
    Treenode *root = new Treenode(rootData);
    root->left = helper(arr, s, mid - 1);
    root->right = helper(arr, mid + 1, e);

    return root;
}
Treenode *sortedarrayToBST(vector<int> &nums)
{
    int n = nums.size();
    return helper(nums, 0, n - 1);
}