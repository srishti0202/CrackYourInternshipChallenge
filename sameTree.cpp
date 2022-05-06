//Logic - if either of them is NULL that is possible only if both of them is NULL.
//if p->val!q->val return false else return isSameTree(p->left,q->left) && isSameTree(p->right,q->right)
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q) return p==NULL && q==NULL;
        if(p->val==q->val){
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};