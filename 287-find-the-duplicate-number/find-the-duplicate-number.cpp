class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        int ans;
        for(int i=0;i<nums.size();i++){
            ans = nums[i];
            if(st.find(ans) != st.end())break;

            st.insert(ans);
        }
        return ans;
    }
};