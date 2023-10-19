class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string k,m = "";

        for(int i=0;i<s.size();i++){
            if(s[i] == '#') k = k.substr(0, k.size()-1);
            else k += s[i];}

        for(int i=0;i<t.size();i++){
            if(t[i] == '#') m = m.substr(0 , m.size()-1);
            else m += t[i];
        }

        return k==m;
    }
};