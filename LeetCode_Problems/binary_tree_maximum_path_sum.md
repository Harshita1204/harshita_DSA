```cpp
class Solution {
public:
     int maxi = INT_MIN;
     int dfs(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left = max(0, dfs(root->left));
        int right = max(0, dfs(root->right));
        int maxi = max(maxi, left+right+ root->val);
        return root->val + max(left+right);
     }
    int maxPathSum(TreeNode* root) {
         dfs(root);
         return maxi;
    }
};
```