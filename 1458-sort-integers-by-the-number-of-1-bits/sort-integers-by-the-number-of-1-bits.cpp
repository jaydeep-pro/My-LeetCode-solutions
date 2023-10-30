class Solution {
public:
   static int noofbits(int n){
        int bits =0;
        while(n){
            bits ++;
            n = n&(n-1);
        }
        return bits;
    }
    static bool compare(int a , int b){
        if(noofbits(a) == noofbits(b)) return a<b;

        return noofbits(a) < noofbits(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
         return arr;
    }
};