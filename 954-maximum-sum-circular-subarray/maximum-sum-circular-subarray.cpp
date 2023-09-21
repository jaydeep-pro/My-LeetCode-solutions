class Solution {
public:
    int kadane(vector<int>&nums){
        int sum =nums[0];
        int curr = nums[0];

        for(int i=1;i<nums.size();i++){
             if(curr < 0){
                curr = 0;
            }
            curr = curr+ nums[i];
            sum = max(sum, curr);
        }
        return sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int nonwrap = kadane(nums);
        int total =0;
        for(int i=0;i<nums.size();i++){
            total += nums[i];
            nums[i] = -nums[i];
        }
        int wrap = total + kadane(nums);
        if(wrap <= 0) return nonwrap;
        return max(wrap, nonwrap);
    }
};