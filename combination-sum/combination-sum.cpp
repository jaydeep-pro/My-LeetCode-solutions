class Solution {
public:
    void solve(vector<int>&arr, int target, int idx , int n, vector<vector<int>>&ans, vector<int>&ds){
         if(idx == n){
             if(target==0){
                 ans.push_back(ds);
             }
             return;
         }

         //pick
         if(arr[idx] <= target){
         ds.push_back(arr[idx]);
        
         solve(arr, target-arr[idx], idx, n , ans, ds);
         
         ds.pop_back();}


         //not pick
         solve(arr, target , idx+1, n , ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        solve(candidates, target, 0, candidates.size(), ans, ds);

        return ans;
    }
};