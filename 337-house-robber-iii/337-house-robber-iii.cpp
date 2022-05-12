/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,int>dp;
    int get(TreeNode* root)
    {
        if(root==NULL)  return 0;
        if(dp.count(root)>=1)return dp[root];
        int take=root->val;
        if(root->left){
            take+=get(root->left->left);
            take+=get(root->left->right);     
        }
        if(root->right){
            take+=get(root->right->left);
            take+=get(root->right->right);
            
        }
        int notTake=get(root->left)+get(root->right);
            
        return dp[root]= max(take,notTake);
       
    }
    int rob(TreeNode* root) {  
         
        if(root==NULL) return 0;
    
        return get(root);
    }
};