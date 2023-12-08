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
    void nlr(TreeNode* root, string & ans){
        if(!root){
            ans += ')';
            return;
        }
        if ( !root->left && root->right ) ans+="()";
       
        if(root->left){
            ans = ans + '(' + to_string(root->left->val);
            nlr(root->left, ans);
            ans += ')';
        }
        
        if(root->right){
            ans += '(' + to_string(root->right->val);
            nlr(root->right, ans);
            ans += ')';
        }
      
    }
    string tree2str(TreeNode* root) {
        if(!root) return "";

        string ans = "";
        ans += to_string(root->val);
        nlr(root, ans);
        return ans;
    }
};