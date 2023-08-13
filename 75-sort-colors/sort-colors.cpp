class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();

        int i=0;
        int j=n-1;
        int k = n-1;

        while(k>i){
           if(nums[i] == 2){
               swap(nums[i] , nums[j]);
               j--;
               k--;
           } else if(nums[i] == 0){
               i++;
           }
            else if(nums[j] == 2){
               j--;
               k--;
           }
           else if(nums[k] ==0){
               swap(nums[i], nums[k]);
               i++;
           }
           else if(nums[k] == 1){
               k--;
           }
            else if(nums[k] == 2){
               swap(nums[j], nums[k]);
               k--;
               j--;
           }
        }

    }
};