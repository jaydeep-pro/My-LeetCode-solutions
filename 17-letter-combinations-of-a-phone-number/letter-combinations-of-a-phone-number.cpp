class Solution {
public:
   void solve(vector<string>&ans, string &temp, string digits, unordered_map<int, string>mp, int ind , int n){
      if(ind == n){
          ans.push_back(temp);
          return;
      }
      int only = digits[ind]-'0';
     string s = mp[only];
      for(int i=0;i<s.length();i++){
           temp+=s[i];
           solve(ans, temp, digits, mp, ind+1, n);
           temp.pop_back();
      }
   }
    vector<string> letterCombinations(string digits) {
        unordered_map<int, string>mp;
        mp[2] = "abc";
        mp[3] = "def"; 
        mp[4] = "ghi"; 
        mp[5] = "jkl"; 
        mp[6] = "mno"; 
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        if(digits.length()==0) return {};
        vector<string>ans;
        string temp = "";
        solve(ans, temp, digits, mp, 0, digits.length());
        return ans;
    }
};