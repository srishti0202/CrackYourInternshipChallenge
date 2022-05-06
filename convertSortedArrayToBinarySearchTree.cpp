// Logic -Handle the base cases first - then do the same thing for the numbers less than root and the numbers greater than root
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        if(nums.size()==1){
            TreeNode* root=new TreeNode(nums[0]);
            return root;
        }
        int mid=nums.size()/2;
        TreeNode* root=new TreeNode(nums[mid]);
        vector<int> left(nums.begin(), nums.begin()+mid);
        vector<int> right(nums.begin()+mid+1, nums.end());
        root->left=sortedArrayToBST(left);
        root->right=sortedArrayToBST(right);
        return root;
    }
};