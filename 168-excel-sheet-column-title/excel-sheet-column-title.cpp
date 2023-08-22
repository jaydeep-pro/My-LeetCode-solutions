class Solution {
public:
    string convertToTitle(int columnNumber) {
      string ans = "";
      while(columnNumber>0){
          columnNumber--;
          int remainder = columnNumber % 26;
          columnNumber /= 26;
          ans = (char)(remainder + 'A') + ans;
      }
    
      return ans;
    }
};