class Solution {
public:
    int height (TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        if(abs(leftheight - rightheight) > 1)
            return false;
        
        return isBalanced(root->left)&& isBalanced(root->right);
    }
};