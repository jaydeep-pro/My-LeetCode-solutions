class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini = INT_MAX;
       int maxi = 0;

       for(int p:prices){
           mini = min(mini, p);
           maxi = max(p-mini , maxi);
       }
       return maxi;
    }
};