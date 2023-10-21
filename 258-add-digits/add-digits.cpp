class Solution {
public:
    int addDigits(int num) {
        int sum=0;

        while(true){
           while(num){
             sum += num%10;
            num = num/10;
           }

            if(sum <= 9) return sum;

            num = sum;
            sum =0;
        }
        return 0;
    }
};