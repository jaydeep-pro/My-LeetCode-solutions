class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int>mp;
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            mp[s[i]]--;
        }
        char ans;

        for(auto it: mp){
            if(it.second) return it.first;
        }
        return ans;

    }
};