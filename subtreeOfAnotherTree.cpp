//logic-if root is NULL return false, if root and subroot are the same tree return true otherwise search in left subtree and right subtree if subtree of either -> return true
class Solution {
public:
    
    bool isSameTree(TreeNode* root, TreeNode* subRoot){
        if(!root||!subRoot){
            return root==NULL && subRoot==NULL;
        }
        else if(root->val==subRoot->val){
            return isSameTree(root->left, subRoot->left) && isSameTree(root->right, subRoot->right);
        }
        else{
            return false;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        else if(isSameTree(root, subRoot)) return true;
        else return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};