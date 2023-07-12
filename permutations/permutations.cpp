class Solution {
public:
    void solve(vector<vector<int>>&ans, vector<int>&nums, int idx, int n){
        if(idx == n){
            ans.push_back(nums);
            return ;
        }
        for(int i= idx ;i<n ;i++){
            swap(nums[i], nums[idx]);
            solve(ans, nums, idx+1 , n);
            swap(nums[idx] , nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(ans, nums, 0, nums.size());
        return ans;
    }
};