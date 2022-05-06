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
    
      bool check( TreeNode* root,TreeNode* mine,TreeNode* maxe)
      {
          if(root==NULL)
          {
              return true;
          }
            if(maxe!=NULL&&root->val>=maxe->val||mine!=NULL &&root->val<=mine->val)
            {
                return  false;
            }
          
            return check(root->left,mine,root)&&check(root->right,root,maxe);
          
      }
    bool isValidBST(TreeNode* root) {
     if(!root)
     {
   return true;
     }
        return check(root,NULL,NULL);
    }
};