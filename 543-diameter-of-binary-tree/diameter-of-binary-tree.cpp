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
     int leng(TreeNode* node)
     {
        if(node==NULL)
        {
            return 0;
        }

        int lh =leng(node->left);
        int rh = leng(node->right);

        return max(lh,rh)+1;

     }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
      return 0; // Handle empty tree case
    }

    int lh = leng(root->left);
    int rh = leng(root->right);
    int diameterLeft = diameterOfBinaryTree(root->left);
    int diameterRight = diameterOfBinaryTree(root->right);

    // Consider all three cases mentioned above
    return max(lh + rh, max(diameterLeft, diameterRight));
    }
};