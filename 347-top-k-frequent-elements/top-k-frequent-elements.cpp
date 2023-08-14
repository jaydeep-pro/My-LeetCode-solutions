class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int, int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

         vector<int>ans;
    priority_queue<pair<int , int>> maxHeap;

    for(auto it: mp){
        maxHeap.push({it.second, it.first});
    }
   
  

   while(ans.size() != k){
       ans.push_back(maxHeap.top().second);
       maxHeap.pop();
   }
      return ans;
    }
};