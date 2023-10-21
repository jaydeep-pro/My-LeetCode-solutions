class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n= score.size();
        vector<string>res(n, "");
       priority_queue<pair<int,int>>pq;
       for(int i=0;i<n;i++) pq.push({score[i] , i});
        int count=0;
       while(!pq.empty()){
           int index = pq.top().second;
           pq.pop();
           if(count ==0 ) {res[index] = "Gold Medal"; count++;}
          else if(count == 1) {res[index] = "Silver Medal";count++;}
          else if(count == 2){ res[index] = "Bronze Medal"; count++;}
           else { res[index] = to_string(count+1); count++;}
       }
       return res;
    }
};