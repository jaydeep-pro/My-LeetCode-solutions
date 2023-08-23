class Solution {
public:
    string reorganizeString(string s) {
       string ans;
       priority_queue<pair<int, int>>pq;
      int arr[26]= {0};

       for(char c : s){
           arr[c - 'a']++;
       }
       for(int i=0;i<26;i++){
           if(arr[i] >0){
               pq.push({arr[i], i + 'a' });
           }
       }

       while(!pq.empty()){
          char first = pq.top().second;
          int count1 = pq.top().first;
          pq.pop();
         

         if(ans.size() == 0 || ans.back() != first){
             ans += first;

             if(--count1 >0) pq.push({count1 , first});
         }
         else{
             if(pq.size() ==0) return "";
         
             char second = pq.top().second;
             int count2 = pq.top().first;

             pq.pop();

             ans += second;
             if(--count2 >0) pq.push({ count2 , second});

            pq.push({count1 , first});
       }
       }
       return ans;
    }
};