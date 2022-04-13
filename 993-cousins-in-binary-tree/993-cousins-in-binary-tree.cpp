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
    
     void helper(TreeNode* root, int x, int y, int &lvx, int &lvy, int depth, int &parentx, int &parenty, int parent)
    {   
        if(!root)
            return;
        if(root->val == x)
        {
            parentx = parent;
            lvx = depth+1;
        }
        if(root->val == y)
        {
            parenty = parent;
            lvy = depth+1;
        }
        
        helper(root->left, x, y, lvx, lvy, depth+1, parentx, parenty, root->val);
        helper(root->right, x, y, lvx, lvy, depth+1, parentx, parenty, root->val);
    }
    
    bool isCousins(TreeNode* root, int x, int y) 
    {
        int lvx = 0, lvy = 1;
        int parentx, parenty;
        helper(root, x, y, lvx, lvy, 0, parentx, parenty, root->val);
        
        return lvx == lvy and parentx != parenty;
    }
};