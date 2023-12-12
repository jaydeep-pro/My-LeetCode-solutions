class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int first_maxi = INT_MIN;
       int second_maxi = INT_MIN;

       for(int i=0;i<nums.size();i++){
           if(nums[i] > first_maxi){
               second_maxi = first_maxi;
               first_maxi = nums[i];
           }
           else{
               second_maxi = max(second_maxi , nums[i]);
           }
       }
       return (first_maxi -1 ) * (second_maxi -1);
    }
};