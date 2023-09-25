class Solution {
public:
    char findTheDifference(string s, string t) {
      int sums=0;
      int sumt=0;

    for(int i=0;i<s.length();i++){
        sums += s[i];
    }
    for(int i=0;i<t.length();i++){
        sumt += t[i];
    }
     
    char ans = sumt - sums;
    return ans;
    }
};