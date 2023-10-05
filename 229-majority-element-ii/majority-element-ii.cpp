class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int first = 0, second = 0;
       int count1=0 , count2 = 0;

       for(int i=0;i<nums.size();i++){
           if(first == nums[i]) count1 += 1;
           else if(second == nums[i]) count2 += 1;
           else if(count1 ==0 ){
               first = nums[i];
               count1 += 1;
           }
           else if(count2 == 0){
               second = nums[i];
               count2 += 1;
           }
           else{
               count1--;
               count2--;
           }
       }
        count1 = count2 = 0;
      for(auto x : nums){
          if(x == first ) count1++;
          else if(x == second) count2++;
      }
    if(count1 > nums.size()/3 && count2 > nums.size()/3)        return {first, second};
       else if(count1 > nums.size()/3) return {first};
       else if(count2 > nums.size()/3) return {second};
       else return {};
    }
};