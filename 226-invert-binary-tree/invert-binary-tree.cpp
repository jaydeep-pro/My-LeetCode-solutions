/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void solve(TreeNode *root)
        {
            if (!root) return;

            TreeNode* temp ;
          swap(root->right, root->left);
        //     if(root->left){
        //         temp = root->left;
        //     }
        //     if(root->right){
        //        root->left = root->right;
        //     }
        //    root->right = temp;

            solve(root->right);
            solve(root->left);
        }
    TreeNode* invertTree(TreeNode *root)
    {
       
        solve(root);
        return root;
    }
};