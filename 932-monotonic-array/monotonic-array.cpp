class Solution {
public:
    bool dec(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]) return false;
        }
        return true;
    }
    bool inc(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1]) return false;
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        return (dec(nums) || inc(nums));
    }
};