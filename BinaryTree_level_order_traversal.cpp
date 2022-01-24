#include <bits/stdc++.h>
using namespace std;

void helper(TreeNode *root,vector<int> & ans){
    vector<int> temp;
    temp.push_back(root->val);
    ans.push_back(temp);
    temp.clear();
    helper(root->left,ans);
    helper(root->right,ans);

}
vector<vector<int>> levelOrder(TreeNode *root)
{
    
    vector <vector<int>> ans;
    helper(root,ans);
}