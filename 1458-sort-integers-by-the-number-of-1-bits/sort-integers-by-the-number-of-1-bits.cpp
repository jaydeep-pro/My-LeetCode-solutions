class Solution {
public:
    int noofbits(int n){
        int bits =0;
        while(n){
            bits ++;
            n = n&(n-1);
        }
        return bits;
    }
    vector<int> sortByBits(vector<int>& arr) {
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
         for(int i=0;i<arr.size();i++){
             pq.push({noofbits(arr[i]), arr[i]});
         }

         arr.clear();
         while(!pq.empty()){
             arr.push_back(pq.top().second);
             pq.pop();
         }
         return arr;
    }
};