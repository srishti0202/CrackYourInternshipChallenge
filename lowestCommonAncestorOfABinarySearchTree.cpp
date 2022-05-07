
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        TreeNode* curr=root;
        if(curr->val<p->val && curr->val<q->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        else if(curr->val>p->val && curr->val>q->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};