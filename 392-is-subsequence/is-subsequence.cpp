class Solution {
public:
   bool solve(string s, string t, int i, int j){
       if(i< 0) return true;
       if(j<0) return false;

       if(s[i] == t[j]) return solve(s, t, i-1, j-1);
       else{
         return solve(s, t, i, j-1); 
       }
   }
    bool isSubsequence(string s, string t) {
        return solve(s, t, s.size()-1, t.size()-1);
    }
};