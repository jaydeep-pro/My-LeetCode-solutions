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
 
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};

        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
        
        while(!q.empty()){
           int size = q.size();
            int maxi = INT_MIN;
           for(int i=0;i<size;i++){
               root = q.front();
               q.pop();
               if(root->left) q.push(root->left);
               if(root->right) q.push(root->right);
               maxi = max(maxi, root->val);
           }
           ans.push_back(maxi);
        }
        return ans;

    }
};