class Solution {
public:
    vector<string> cellsInRange(string s) {
         vector<string>ans;
         
         for(char i = s[0];i<= s[3];i++){
             for(int j = s[1] ;j <= s[4]; j++){
                 ans.push_back(i + to_string(j-'0'));
             }
         }
         return ans;


    }
};