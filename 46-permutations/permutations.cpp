class Solution {
public:
    void solve(vector<int>&nums, vector<vector<int>>&ans, int n, int ind){
        if(ind == n-1){ans.push_back(nums);
        return;
        }
        
        for(int i=ind;i<n;i++){
            swap(nums[i], nums[ind]);
            solve(nums, ans, n, ind+1);
            swap(nums[i], nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(nums, ans, nums.size() , 0);
        return ans;
    }
};