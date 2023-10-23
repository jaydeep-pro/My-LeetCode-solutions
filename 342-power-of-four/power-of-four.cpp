class Solution {
public:
    bool isPowerOfFour(int n) {
        // if(n == 0) return false;
        // double x = (log(n))/log(4);

        //  if(trunc(x) == x) return true;

        // // if(floor(x) == x) return true;
        // return false;
cout<<"Ek 1 hone chaiye and even zeros hone chaiye"<<endl;
        return __builtin_popcount(n) == 1 && __builtin_ctz(n)%2 ==0;


    }
};