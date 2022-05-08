class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum=0;
        if(!root) return 0;
        if(root->left && !root->left->left && !root->left->right){
            sum+=root->left->val;
        }
        sum=sum+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        return sum;
    }
    
};