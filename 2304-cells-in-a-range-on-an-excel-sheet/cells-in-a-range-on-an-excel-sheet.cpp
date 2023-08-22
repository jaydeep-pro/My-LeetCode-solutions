class Solution {
public:
    vector<string> cellsInRange(string s) {
        int first = s[1];
        int second = s[4];
        char start= s[0];
        char end = s[3];
         vector<string>ans;
         for(char i = start;i<= end;i++){
             for(int j = first ;j <= second; j++){
                 ans.push_back(i + to_string(j-'0'));
             }
         }
         return ans;


    }
};