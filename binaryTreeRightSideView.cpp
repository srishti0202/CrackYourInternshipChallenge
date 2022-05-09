
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
          
            int size=que.size();
            for(int i=0; i<size; i++){
                TreeNode* front=que.front();
                que.pop();
                
                if(front->left){
                    que.push(front->left);
                }
                if(front->right){
                    que.push(front->right);
                }
                if(i+1==size){
                    ans.push_back(front->val);
                }
            }
        }
        return ans;
    }
};