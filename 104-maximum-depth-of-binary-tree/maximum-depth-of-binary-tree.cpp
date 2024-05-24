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
 int dig(TreeNode* temp)
 {
    if(temp==NULL)
    return 0;
    
    int l= dig(temp->left);
    
   int r= dig(temp->right);

    return max(l,r)+1;

 }
      
    int maxDepth(TreeNode* root) {

         int sum=0;

        int m= dig(root);
        return m;
    }
};