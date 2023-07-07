class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0 || nums.size()==1) return nums.size();
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++) st.insert(nums[i]);
       int count =1;
       int maxCount = 1;
         for(auto it:st){
             if(st.find(it-1) == st.end()){
                 count=1;
                int x = it;
                 while(st.find(x+1) != st.end()){
                     x = x+1;
                     count++;

                 maxCount = max(count, maxCount);
                 }
             }
         }
         return maxCount;
    }
};