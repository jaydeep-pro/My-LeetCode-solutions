class Solution {
public:
    string getPermutation(int n, int k) {
        string ans= "";
        vector<int>nums;
        int comb = 1;

        for(int i=1;i<=n;i++){
            nums.push_back(i);
            comb*=i;
        }
       k= k-1;
        while(nums.size()>0){
           int perIndex = comb/n;
           int index = k/perIndex;
           ans+= nums[index]+'0';

           //delete that index from nums
           nums.erase(nums.begin()+index);

           //update the k
           k = k - (index*perIndex);
           comb = comb/n;
           n=n-1;
        }

        return ans;
    }
};