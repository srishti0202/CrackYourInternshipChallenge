class Solution {
public:
    
    void binaryTreeHelper(TreeNode* root, vector<string>& ans, string t){
        if(!root) return;
        if(!root->left && !root->right){
            t+=(to_string(root->val));
            ans.push_back(t);
        }
         t+=(to_string(root->val)+"->");
            binaryTreeHelper(root->left, ans, t);
            binaryTreeHelper(root->right, ans, t);

        }
        
        
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==NULL) return ans;
        string t="";
        binaryTreeHelper(root, ans, t);
        return ans;
    }
};