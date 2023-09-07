class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n= nums.size();

       ListNode* ans = new ListNode(nums[0]);
       ListNode* dummy = ans;
        int count =0;
       for(int i=1;i<n;i++){
           if(nums[i]==nums[i-1]) count++;
           else{
               dummy->next = new ListNode(nums[i]);
               dummy = dummy->next;
           }
       }
       int i=0;
       while(ans){
           nums[i++] = ans->val;
           ans = ans->next;
       }
       return n-count;
    }
};