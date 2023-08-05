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
   vector<TreeNode*> solve(int start, int end, map<pair<int, int>, vector<TreeNode*>>&mp){
       vector<TreeNode*>ans;
       if(start > end){
           TreeNode* temp = NULL;
           ans.push_back(temp);
           return ans;
       }
       if(mp.find({start, end}) != mp.end()){
           return mp[make_pair(start, end)];
       }

       for(int i=start;i<=end ;i++){
          vector<TreeNode*> left = solve(start, i-1, mp);
          vector<TreeNode*> right = solve(i+1, end, mp);
       

       for(auto it1 : left){
           for(auto it2 : right){
               TreeNode* root = new TreeNode(i,it1 ,it2);
               ans.push_back(root);
           }
         }
       }
       return mp[{start, end}] = ans;
   }
    vector<TreeNode*> generateTrees(int n) {
        map<pair<int, int>, vector<TreeNode*>> mp;
        return solve(1, n, mp);
         //solve(start, end, map);
    }
};