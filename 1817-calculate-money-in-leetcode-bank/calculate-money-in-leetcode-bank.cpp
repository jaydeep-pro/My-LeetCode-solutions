class Solution {
public:
    int totalMoney(int n) {
       int count =0;
       int monday = 1;

       while(n>0){
         for(int i=0;i<min(7,n);i++){
           count += monday + i;
         }
         monday++;
         n = n-7;
       }
       return count;
    }
}; 