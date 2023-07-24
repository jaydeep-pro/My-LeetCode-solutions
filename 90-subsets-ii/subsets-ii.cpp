class Solution {
public:
   void solve(vector<int>nums, int idx, int n , vector<int>temp, vector<vector<int>>&ans){
       
  
          ans.push_back(temp);
  

       for(int i=idx;i<n;i++){
         if(i>idx && nums[i] == nums[i-1])continue;
    
             temp.push_back(nums[i]);
             solve(nums, i+1, n , temp, ans);
             temp.pop_back();
         
       }


   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        vector<int>temp;
        solve(nums, 0, nums.size(), temp , ans);

        return ans;
    }
};