class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increase = true, decrease= true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]) decrease = false;
            if(nums[i] > nums[i+1]) increase = false;

        }
        return increase || decrease;
    
    }
};