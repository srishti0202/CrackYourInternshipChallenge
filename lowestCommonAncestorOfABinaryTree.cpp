// each node will return the root value if p==root || q==root eg when p=5, it returns 5 and q=1 it returns 1 to 3, since both returns ans will be root ie 3
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p || root==q){
            return root;
        }
        TreeNode* left=lowestCommonAncestor(root->left, p, q);
        TreeNode* right=lowestCommonAncestor(root->right, p, q);
        if(left==NULL &&right==NULL) return NULL;
        else if(left==NULL && right!=NULL) return right;
        else if(left!=NULL && right==NULL) return left;
        else{
            return root;
        }
    }
};