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
void solve(TreeNode* root, int level , vector<vector<int>>&res){
         if(!root) return;
         
         if (level >= res.size()) {
        res.push_back(vector<int>());
         }

       res[level].push_back(root->val);
        if(root->left) solve(root->left, level+1, res);
        if(root->right) solve(root->right, level+1, res);
   }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        solve(root , 0, res);

        return res;
    }
};