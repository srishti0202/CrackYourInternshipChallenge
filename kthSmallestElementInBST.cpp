// M1-using inorder traversal-since inorder traversal gives nodes
in ascending order, so we decrement k and when it becomes equal
to 0, we return the val
class Solution {
public:
    int ans;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
    
    void inorder(TreeNode* root, int &k){
        if(!root) return;
        inorder(root->left,k);
        if(--k==0){
            ans=root->val;
        }
        inorder(root->right, k);
    }
};

//M2-using level-order-traversal and priority queue


class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        queue<TreeNode*> que;
        vector<int> levelOrder;
        que.push(root);
        while(!que.empty()){
            TreeNode* front=que.front();
            que.pop();
            if(front->left){
                que.push(front->left);
            }
            if(front->right){
                que.push(front->right);
            }
            levelOrder.push_back(front->val);
        }
        
        for(auto i:levelOrder){
            pq.push(i);
        }
        while(--k){
            pq.pop();
        }
        return pq.top();
    }
};