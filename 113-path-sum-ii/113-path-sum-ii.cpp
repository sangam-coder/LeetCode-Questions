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
      vector<vector<int>>ans;
    vector<int>subans;
    void fun(TreeNode* root,int ts,int sum)
    {
        if(root == NULL)return;
        sum = sum+root->val;
        subans.push_back(root->val);
        
        if(root->left == NULL   && root->right == NULL &&ts == sum){
            ans.push_back(subans);
        }
       
        fun(root->left,ts,sum);  
        fun(root->right,ts,sum);
        subans.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root == NULL)return ans;
        fun(root,targetSum,0);
        return ans;
    }
};