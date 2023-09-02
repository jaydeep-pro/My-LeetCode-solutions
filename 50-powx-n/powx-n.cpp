class Solution {
public:
   double solve(double x, long long int n){
       if(n == 0) return 1;
       if(n == 1) return x;
       if(n <0) return 1.0/solve(x, -1 * n);

      if(n%2){
          return x*solve(x*x, n/2);
      } 
      return solve(x*x, n/2);
   }
    double myPow(double x, int n) {   
       
        
        return solve(x,n);
    }
};