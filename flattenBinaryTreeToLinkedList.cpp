class Solution {
public:
    
    TreeNode* flattenHelper(TreeNode* root){
        if(!root) return NULL;
        TreeNode* l=flattenHelper(root->left);
        TreeNode* r=flattenHelper(root->right);
        if(l!=NULL){
            TreeNode* temp=l;
            while(temp->right){
                temp=temp->right;
            }
            temp->right=r;
            root->right=l;
            root->left=NULL;
        }
        else{
            root->right=r;
            root->left=NULL;
        }
        return root;
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        root=flattenHelper(root);
    }
};