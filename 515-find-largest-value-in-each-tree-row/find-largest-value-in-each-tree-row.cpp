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
 int maxDepth(TreeNode* root) {
        if(root == NULL) return 0; 
        
        int lh = maxDepth(root->left); 
        int rh = maxDepth(root->right); 
        
        return 1 + max(lh, rh); 
    }
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        
        queue<pair<TreeNode*,int>>q;
        vector<int>ans(maxDepth(root) , INT_MIN);
        q.push({root, 0});
        
        while(!q.empty()){
           int level = q.front().second;
           root = q.front().first;
           q.pop();
          ans[level] = max(ans[level] , root->val);

          if(root->left){
              q.push({root->left, level+1});
          }
          if(root->right){
              q.push({root->right, level + 1});
          }   
        }
        return ans;

    }
};