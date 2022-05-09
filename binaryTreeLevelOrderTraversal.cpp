
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> finalAns;
        
        if(!root) return finalAns;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size=que.size();
            vector<int> ans;
            for(int i=0; i<size; i++){
                TreeNode* front=que.front();
                que.pop();
                if(front->left){
                    que.push(front->left);
                }
                if(front->right){
                    que.push(front->right);
                }
                ans.push_back(front->val);
            }
            finalAns.push_back(ans);
        }
        return finalAns;
    }
};