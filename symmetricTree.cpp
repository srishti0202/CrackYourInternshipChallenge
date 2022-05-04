//logic-check if root->left is symmetric to root->right
//isSymmetricCheck function - check if p->val ==q->val if not return false
//if equal check isSymmetricCheck(p->left, q->right) && isSymmetricCheck(p->right, q->left)
class Solution {
    
public:
    bool isSymmetricCheck(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        else if(!p||!q) return false;
        else if(p->val!=q->val) return false;
        return isSymmetricCheck(p->left, q->right) && isSymmetricCheck(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return false;
        return isSymmetricCheck(root->left, root->right);
    }
};