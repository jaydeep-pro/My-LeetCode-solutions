class Solution {
public:
    string reverseWords(string s) {
        string temp= "";
        string ans = "";
        for(int i=0;i<s.length();i++){
           if(s[i] == ' '){
               ans += temp + " ";
               temp = "";
           }
          else temp = s[i] + temp;
        }
        ans += temp;
        return ans;
    }
};