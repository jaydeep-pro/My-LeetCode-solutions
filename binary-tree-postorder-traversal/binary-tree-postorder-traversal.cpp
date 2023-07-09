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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root == NULL) return v;
        stack<TreeNode*>st;
        st.push(root);
        stack<int>st2;
        while(!st.empty()){
         root = st.top();
            st.pop();

            st2.push(root->val);
            if(root->left)
            st.push(root->left);
            if(root->right)
            st.push(root->right);
        } 
         while(!st2.empty()){
             v.push_back(st2.top());
             st2.pop();
         } 
         return v; 
    }
};