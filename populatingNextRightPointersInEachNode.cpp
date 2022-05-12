//performing a level order traversal and if for the current level i!=size-1 ie i is not the last node
//setting the next pointer to the next node which can be obtained from the front of the queue.
class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node*> que;
        que.push(root);
        while(!que.empty()){
            int size=que.size();
            for(int i=0; i<size; i++){
                Node* front=que.front();
                que.pop();
                if(i!=size-1){
                    front->next=que.front();
                }
                if(front->left){
                    que.push(front->left);
                }
                if(front->right){
                    que.push(front->right);
                }
            }
        }
        return root;
    }
};