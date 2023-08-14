class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string, vector<string>> mp;

        for(int i=0;i<str.size();i++){
            string temp = str[i];

            sort(temp.begin(), temp.end());
        
           mp[temp].push_back(str[i]);
        }
        vector<vector<string>>ans;
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};