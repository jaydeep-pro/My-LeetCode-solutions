class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int count =__builtin_popcount(i);
           
            ans.push_back(count);
        }
        return ans;
    }
};