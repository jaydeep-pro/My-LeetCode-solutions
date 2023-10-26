class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int>st;
        for(int i=0;i<arr.size();i++) st.insert(arr[i]);
        int count =0;
        int i=1;
        
        while(true){
         if(st.find(i) != st.end()) {
             i++;
          }
          else{
              count++;
              i++;
          }
           
         if(count == k) return i-1;
        }
        return 0;
    }
};