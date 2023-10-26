class Solution {
public:
     int mod = 1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        long ans =0;
        sort(arr.begin(), arr.end());
        unordered_map<int,long>mp;
       
        for(int i=0;i<arr.size();i++){
             long temp = 1;

             for(int j=0;j<i;j++){
                 if(arr[i]%arr[j] ==0){
                 int a = arr[i]/arr[j];
                 int b = arr[j];
                 temp = temp + (mp[a]*mp[b])%mod;
             }}
             mp[arr[i]] = temp;
             ans += temp;
        }

     return ans%mod;
    }
};