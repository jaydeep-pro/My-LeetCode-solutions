class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int first_maxi = INT_MIN;
       int second_maxi = INT_MIN;

       for(int i=0;i<nums.size();i++){
           first_maxi = max(first_maxi, nums[i]);
       }
       for(int i=0;i<nums.size();i++){
           if(nums[i] == first_maxi){
               nums[i] = INT_MIN;
               break;
           }
       }
        for(int i=0;i<nums.size();i++){
           second_maxi = max(second_maxi, nums[i]);
       }
       return (first_maxi -1 ) * (second_maxi -1);
    }
};