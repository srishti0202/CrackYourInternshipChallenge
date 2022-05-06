class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL) return root2;
        if(root2==NULL) return root1;
        if(!root1 && !root2) return NULL;
        TreeNode* newNode=new TreeNode(root1->val+root2->val);
        newNode->left=mergeTrees(root1->left, root2->left);
        newNode->right=mergeTrees(root1->right, root2->right);
        return newNode;
    }
};
