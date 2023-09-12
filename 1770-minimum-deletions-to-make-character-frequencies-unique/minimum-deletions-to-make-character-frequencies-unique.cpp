class Solution {
public:
    int minDeletions(string s) {
       unordered_map<char, int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        set<int>st;

      int count =0;
        for(auto it: mp){
            if(st.find(it.second) != st.end()){
                int x = it.second;
               while(st.find(x) != st.end()){
                   count++;
                   x--;
               }
               if(x != 0)
               st.insert(x);
            }
            else{
               st.insert(it.second);
            }
        }
        return count;
    }
};