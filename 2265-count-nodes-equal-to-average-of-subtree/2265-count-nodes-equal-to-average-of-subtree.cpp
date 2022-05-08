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

 int sum(TreeNode* root) {
        if(!root) return 0;
        return sum(root->left) + sum(root->right) + root->val;
    }
    int count(TreeNode* root) {
        if(!root) return 0;
        return count(root->left) + count(root->right) + 1;
    }
    int c = 0;
    int averageOfSubtree(TreeNode* root) {
        if(!root) return 0;
        int s = sum(root->left) + sum(root->right) + root->val;
        int n = count(root->left) + count(root->right) + 1;
        int ans = 0;
        if(n != 0)
        {
            ans = s/n;
        }
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        if(ans == root->val)
        {
            c++;
        }
        return c;
    }
};