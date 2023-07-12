class Solution {
public:
   void solve(vector<vector<int>>&ans, vector<int>&temp, vector<int>&nums, int idx, int n , unordered_map<int,bool>&mp){
          if(idx == n){
              ans.push_back(temp);
              return;
          }

          for(int i=0 ;i<n;i++){
              if(!mp[nums[i]]){
                  mp[nums[i]]=true;
                  temp.push_back(nums[i]);
                  solve(ans, temp, nums,idx+1, n , mp);
                  temp.pop_back();
                  mp[nums[i]]=false;
              }
          }
   }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int, bool>mp;
        vector<int>temp;
       solve(ans,temp, nums, 0 , nums.size(), mp);
       return ans;
    }
};