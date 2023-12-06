class Solution {
public:
    int totalMoney(int n) {
        int num = 28;
       long long int pre = 1;
        int suff = 8;
       long long int count =0;
        while(n>=7){
            n = n-7;
            count += num;

            num = num-pre++;
            num = num + suff++;
        }
        
        while(n>=1){
            count += pre++;
            n--;
        }
        return count;
    }
};