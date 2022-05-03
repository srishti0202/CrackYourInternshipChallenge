
class Solution {
public:
    
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left), height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int option1=height(root->left)+height(root->right);
        int option2=diameterOfBinaryTree(root->left);
        int option3=diameterOfBinaryTree(root->right);
        int ans=max(option1, max(option2, option3));
        return ans;
    }
};

//Improved Time Complexity - decreasing the number of calls to the height function


class Solution {
public:
    
    pair<int,int> diameterHelper(TreeNode* root){
        pair<int,int> ans;
        if(root==NULL){
            ans.first=0;
            ans.second=0;
            return ans;
        }
        pair<int,int> left=diameterHelper(root->left);
        pair<int,int> right=diameterHelper(root->right);
        int leftHeight=left.first;
        int leftDiameter=left.second;
        int rightHeight=right.first;
        int rightDiameter=right.second;
        ans.first=1+max(leftHeight, rightHeight);
        ans.second=max(leftHeight+rightHeight, max(leftDiameter, rightDiameter));
        return ans;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        return diameterHelper(root).second;
    }
};
