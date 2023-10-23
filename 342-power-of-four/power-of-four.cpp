class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0) return false;
        double x = (log(n))/log(4);

        // if(trunc(x) == x) return true;

        if(floor(x) == x) return true;
        return false;


    }
};