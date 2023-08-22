class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<char>v;
        for(char i = 'A';i<='Z';i++){
            v.push_back(i);
        }
      
      string ans = "";
      while(columnNumber>0){
          columnNumber--;
          int remainder = columnNumber % 26;
          columnNumber /= 26;
          ans = v[remainder] + ans;
      }
    
      return ans;
    }
};