class Solution {
public:

    bool isEvenDigits(int n){
        int a =0;

        while(n){
            n= n/10;
            a++;
        }

        return a%2 == 0;
    }
    int findNumbers(vector<int>& nums) {
        int ans =0;

        for(int i=0;i<nums.size();i++){
            if(isEvenDigits(nums[i])){
                ans++;
            }
        }

        return ans;
    }
};