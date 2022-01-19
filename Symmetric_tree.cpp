class Solution {
public:
    bool helper(TreeNode*left, TreeNode*right){
         if(left==NULL && right==NULL){
            return true;
        }
        
        if(left!=NULL && right==NULL){
            return false;
        }
        if(left==NULL && right!=NULL){
            return false;
        }
        if (left->val != right->val)
        {
            return false;
        }
        return helper(left->left, right->right) && helper(left->right, right->left);        
    }
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
        {
            return true;
        }
       return helper(root->left,root->right);
         
    }
};